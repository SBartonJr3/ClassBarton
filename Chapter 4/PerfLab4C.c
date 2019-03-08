#include <stdio.h>

/*  Performance Lab 4C
*   Author: Stephen Barton Jr
*   Date: 04 FEB 2019
*   Project: perfLab_4C
*/

int main(void)
{
    
    
    char Charizard[10] = {0}; 
    printf("Enter a string that is 9 or less characters: ");
    fgets(Charizard, sizeof(Charizard), stdin); //string from stdin into a char array of dimension 10
    printf("Your string was: ");
    fputs(Charizard, stdout); //Write that string to stdout
    printf("\n");

    return 0;

}