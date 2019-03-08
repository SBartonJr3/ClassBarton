#include <stdio.h>
#include <string.h>
#include "MyStringHeader.h"

/*
Performance Lab 8B
Stephen Barton Jr  
11 February 2019
*/

int main()
{
    char string[256]={0};           //variable for the string
    char *userInput = {string};
    printf("Please input a string\n"); // asks for userinput of a string
    scanf("%s", &string); 
    int length = strlen(string); //variable for length of string 
    reverse_it(string,length);  //reverses the string
    print_the_count(string, length);    //length of the string
    return 0;
}