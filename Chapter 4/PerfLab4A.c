#include <stdio.h>

/*  Performance Lab 4A
*   Author: Stephen Barton Jr
*   Date: 04 FEB 2019
*   Project: perfLab_4A
*/


int main(void)
{
    int YouPutThisIn = 0;       //variable for input
    printf("Enter a character:  ");
    YouPutThisIn = getchar();       //stores input
    printf("Your character was: ");
    putchar(YouPutThisIn + 1);      //outputs input + 1
    
    printf("\n");

    return 0;

}