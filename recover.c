#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



#define BLOCK_SIZE 512

typedef uint8_t BYTE;

int trueJPEG(BYTE buffer[]);


int main(int argc, char *argv[])
{
    //check usage
    if (argc != 2)
    {

        printf("Usage: ./recover IMAGE\n");

        return 1;
    }

// read information
    FILE *card = fopen(argv[1], "r");
    if (!card)
    {
        printf("Could not open file.\n");
        return 1;
    }

// buffer to hold data
    BYTE buffer[BLOCK_SIZE];

    int count = 0;

    char name[8];

    FILE *image;


//current jpeg header
    while (fread(buffer, BLOCK_SIZE, 1, card) == 1)
    {
        if (trueJPEG(buffer) == 1)
        {
            //move to next jpeg
            if (count != 0)
            {
                fclose(image);
            }
            sprintf(name, "%03i.jpg", count++);
            image = fopen(name, "w");
            fwrite(buffer, 1, BLOCK_SIZE, image);
        }
        else if (count > 0)
        {
            fwrite(buffer, 1, BLOCK_SIZE, image);
        }
    }

}


//checks for jpeg first three bytes
int trueJPEG(BYTE buffer[])
{
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff)
    {
        return 1;
    }
    return 0;
}


