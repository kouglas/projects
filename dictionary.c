// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
//#include "dictionary.h"
#include <string.h>
#include <stdlib.h>
#include <strings.h>



#include "dictionary.h"
//count buckets
//unsigned int buckets = 0;

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;         //gives address of the next node in the array
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 150364;  //changed from 9 to 150364. getting 4 letter words

// Hash table
node *table[N];  // an array of node pointers, every element in the array is a pointer to a node

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);

    node *container = table[index];

    while (container != NULL)
    {
        if (strcasecmp(container -> word, word) == 0)
        {

            return true;
        }
        container = container -> next;
    }
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int location = 0;
    for (int i = 0; i < strlen(word); i++)
    {

        location += tolower(word[i]);
        location = (location * tolower(word[i]) % N);
        // not sure if this is an appropriate implementation of checking case but it currently compiles
    }
    // TODO: Improve this hash function
  //  return location % N;
    return location;
}

unsigned int buckets = 0;
// Loads text into memory, will return true if no errors
bool load(const char *dictionary)
{
    // TODO
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

  //  return true;

    char text[LENGTH + 1]; //array where characters go
    while (fscanf(file, "%s", text) != EOF)
    {




        node *newNode = malloc(sizeof(node));
       if (newNode == NULL)
    {
            return false;
    }

  //  strcpy(newNode ->word, text);

  //  buckets = hash(text);

  //  newNode -> next = table[buckets];

  //  table[buckets] = newNdode

    {
        //return //false;


        }
        strcpy(newNode -> word, text);
        newNode -> next = NULL;
        // need to now make new nodes for words done ish

        //now need to make index for nodes
        int index = hash(text);

        if (table[index] == NULL)
        {
            table[index] = newNode;
        }
        else
        {
            newNode -> next = table[index];

            table[index] = newNode;

        }
        buckets++;
    }
    fclose(file);
    return true;

}
// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return buckets;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
        {
        if (table[i] != NULL)
        {
            // new pointers to free nodes
            node *unload = table[i];
            node *endunload = table[i];
            //free nodes until none are left
            while (unload -> next != NULL)
            {
                unload = unload ->next;
                free (endunload);
                endunload = unload;
            }
            //   free(table[i]);
           // //table[i] = unload;
           //free final holder node
            free(unload);
            }
            // free(unload);
        }
    // TODO
    return true;
    // free(unload);
}

//free(unload);

// apparently you should do load, hash, size, check, unload in this order//



// hash = (strcasecmp(word[i], N));


//somewhere through line 50 and line 75