#include <math.h>
#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float grayscale;

// Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            grayscale = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.00);

            image[i][j].rgbtBlue = grayscale; // 0x00 is all letting through red
            image[i][j].rgbtGreen = grayscale;
            image[i][j].rgbtRed = grayscale;
        }
    }

// ok so you need to take incoming values average them, then output new rgb values with the average value you received.
//the average value you receive needs to be converted from a float to an integer


    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
//loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //sepia formula
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);


            image[i][j].rgbtBlue = (sepiaBlue > 255) ? 255 : sepiaBlue; //using terenary operator
            image[i][j].rgbtGreen = (sepiaGreen > 255) ? 255 : sepiaGreen;
            image[i][j].rgbtRed = (sepiaRed > 255) ? 255 : sepiaRed;
        }
    }
    // implement sepia formula.
    //take a float and round to nearest int

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            //swapping pixels

            int tmp0 = image[i][j].rgbtRed;
            int tmp1 = image[i][j].rgbtGreen;
            int tmp2 = image[i][j].rgbtBlue;

            image[i][j].rgbtRed = image[i][width - j - 1].rgbtRed;
            image[i][j].rgbtGreen = image[i][width - j - 1].rgbtGreen;
            image[i][j].rgbtBlue = image[i][width - j - 1].rgbtBlue;

            image[i][width - j - 1].rgbtRed = tmp0;
            image[i][width - j - 1].rgbtGreen = tmp1;
            image[i][width - j - 1].rgbtBlue = tmp2;
        }
    }

// so int temp = [i];
    //   [i] = [j];
    //  [j] = temp;

    // so swap every pixel [i] to [j] and vice versa. we need a "swap" container or variable
    // to hold the data until each [i] has space then [j] has space so [i] to swap, then [j] to empty[i] then swap to [j]
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

//copy of image
    RGBTRIPLE tmp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avgRed = 0;
            int avgGreen = 0;
            int avgBlue = 0;
            float count = 0;

            for (int a = -1; a < 2; a++)
            {
                for (int b = -1; b < 2; b++)
                {
                    if (i + a < 0 || i + a > height - 1 || j + b < 0 || j + b > width - 1)
                    {
                        continue;
                    }

                    avgRed += image[i + a][j + b].rgbtRed;
                    avgGreen += image[i + a][j + b].rgbtGreen;
                    avgBlue += image[i + a][j + b].rgbtBlue;

                    count++;

                }

            }
            tmp[i][j].rgbtRed = round(avgRed / count);
            tmp[i][j].rgbtGreen = round(avgGreen / count);
            tmp[i][j].rgbtBlue = round(avgBlue / count);

        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = tmp[i][j].rgbtRed;
            image[i][j].rgbtGreen = tmp[i][j].rgbtGreen;
            image[i][j].rgbtBlue = tmp[i][j].rgbtBlue;

        }
    }
    return;
}
