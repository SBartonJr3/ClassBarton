
/*
LAB 2
Follow the instructions below. This is a step by step guide.
USE THE MALLOC DOCUMENTATION!!!!!!!!!!!
Seriously... USE IT
*/

//TODO: Include needed headers
#include <stdio.h>          // For printf and such
#include <stdlib.h>         // For malloc()
#include <malloc.h>

int main(void)
{
    //TODO: Declare a integer pointer
    // This var will point to a memory allocation and will store data
    // ... into that allocated memory
    int *pointer_one;

    /* TODO Using malloc()... allocate a section of memory that is
    large enough to hold an int array of 10 dimension
    */
    pointer_one = (int*)malloc(10 * sizeof(int));
    // In other words, enough space to hold 10 ints


    // TODO: Ensure the pointer isn't NULL (Tell user there was an error and return if so)
    if (pointer_one == 0) // If it's NULL, that means there wasn't enough space to allocate
    {
        printf("ERROR: Not enough memory!");
        return 1;
    }

    for (int i = 0; i < 10; i++)  //TODO: Populate the array with some ints
    {
        pointer_one[i] = i * i;
    }
    
    for (int i = 0; i < 10; i++) //TODO: Print the array out
    {
        printf("pointer_one array[%d] = %d\n", i, pointer_one[i]);
    }
    free(pointer_one); //TODO: Give back the memory space!!!!! This prevents buffer overflow and such
    pointer_one = NULL;  //TODO: NULL the pointer!!! This ensures we aren't pointing at garbage

    return 0;

}