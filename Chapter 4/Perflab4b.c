#include <stdio.h>


/*  Performance Lab 4B
*   Author: Stephen Barton Jr
*   Date: 04 FEB 2019
*   Project: perfLab_4B
*/

int main(void)

{
    int pickSomething = 0;      //variable for input
    printf("Enter a thing: ");      
    pickSomething = getc(stdin);    //stores input
    printf("The thing you entered was : ");
    putc(pickSomething - 1, stdout);    //prints out variable - 1
    printf("\n");

    return 0;
}