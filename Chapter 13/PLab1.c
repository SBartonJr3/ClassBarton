/*
PERFORMANCE LAB 1
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

//TODO: Include needed headers
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(void)
{
    
    char Name[] = "Slim Shady"; //TODO: Create a string containing your first name
    
    sizeof(Name); //TODO: Get the size of this string
    
    char *str; //TODO: Declare a char pointer *str

    str = (char*)malloc(10 * sizeof(char)); //TODO: Allocate a section of memory of type char
    
    char *sptr = (char*)malloc(sizeof(char)+ 40); //TODO: Set the size of this allocated space to 40 bytes
    
    str = sptr; //TODO: Asign the address of this allocated space to the pointer value

    strcpy(str, Name); //TODO: Copy your name into the allocated space using strcpy()
    
    printf("Hi my name is what? my name is who? My name is %s\n", str); //TODO: Print out your name that is stored in the allocated memory space
    
    free(sptr); //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    sptr == NULL; //set the pointer to NULL
    
    printf("%s\n", Name); //TODO: Print out the string again
    
    return 0;
}