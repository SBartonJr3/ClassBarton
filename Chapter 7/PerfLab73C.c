#include <stdio.h>
#include <ctype.h>

/*
Performance Lab 7.3C
Stephen Barton
11 February 2019
*/

int main()
{
    
    int x[26] = {0};
    char Charizard = 0; //initializing variables
    int y = 0;

    printf("Please enter a character\n"); //prompts for a character

    do
    {    
        Charizard = getc(stdin);
         if ((Charizard >= 65 && Charizard< 90) || (Charizard >= 97 && Charizard < 122))
        {
        x[y] = (toupper(Charizard)); //converts to uppercase
        y++;
        }
            
    }   
    while (Charizard != '\n'); //checks if newline

    for (int i = 0; i < 23; i++)
    {
        printf("%c", (char)x[i]);
    }
    printf("\n");
}

