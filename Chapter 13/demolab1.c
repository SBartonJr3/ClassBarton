/*
DEMO LAB 1
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
    int *integer_ptr;

    /* TODO Using malloc()... allocate a section of memory the sizeof int
    Set this memory block to type int. Set your int pointer to this malloc
    --In short, this allocates a section of memory that is the size of
    an integer... AKA 4 bytes. We then tell it that we will be storing an
    integer type within it using (int *). Thus, we can store one integer within
    this allocated memory space. Finally we asign the value in integer_ptr to
    the memory address the malloc returned (aka the first address of the allocated space)
    */
    integer_ptr = (int *)malloc(sizeof(int));
      
    if (integer_ptr == 0)  // TODO: Ensure the pointer isn't NULL (Tell user there was an error and return if so)
    {                      // If it's NULL, that means there wasn't enough space to allocate 
        printf("ERROR: Not enough memory!");
        return 1;
    }
    
    *integer_ptr = 20; //TODO: Set the dereference of the int pointer to some integer value

    printf("The value is: %d\n", *integer_ptr); //TODO: Print the dereferenced value of the integer pointer

    free(integer_ptr); //TODO: Give back the memory space!!!!! This prevents buffer overflow and such
    integer_ptr = NULL; //TODO: NULL the pointer!!! This ensures we aren't pointing at garbage

    return 0;

}