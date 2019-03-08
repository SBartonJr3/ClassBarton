#include <stdio.h>

/*  Performance Lab 2a
*   Author: Stephen Barton
*   Date: 02 FEB 2019
*   Project: perfLab_2a
*/

int main(void)
{
    int integer = 1;            //variables for print statements
    float float1 = 1.3337;
    double double1 = 3.7272;
    char char1 = 75;

    printf("your integer is %d \n", integer);
    printf("the size of your integer is %d \n", sizeof(integer));   //prints integer

    printf("your float is %f \n", float1);                          
    printf("the size of your float is %d \n", sizeof(float1));  //prints float

    printf("your double is %lf \n", double1);
    printf("the size of your double is %d \n", sizeof(double1));    //prints double

    printf("your char is %c \n", char1);
    printf("the size of your char is %d \n", sizeof(char1));    //prints char

    return 0; 
}