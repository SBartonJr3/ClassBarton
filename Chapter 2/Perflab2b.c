#include <stdio.h>

/*  Performance Lab 2B
*   Author: Stephen Barton
*   Date: 02 FEB 2019
*   Project: perfLab_2B
*/

int main(void)

{
    int integer = 42;
    float floatzel = 1.337;         //variables for print statements
    double doubleplay = 1.6765;
    char charmander = 99;

    printf("Your int: %d cast to a float: %f \n", integer, (float) integer); //casts int as float
    printf("Your int: %d cast to a char: %c \n", integer, (char) integer);  //casts int as char
    printf("Your float: %f cast to a double: %lf \n", floatzel, (double) floatzel); // casts float as double
    printf("Your double: %lf cast to a float: %f \n", doubleplay, (float) doubleplay); //casts double as float
    printf("Your char: %c cast to an int: %d \n", charmander, (int) charmander);    //casts char as int
    printf("33 cast to a char: %c \n", 33, (char) 33);  //casts 33 as char

    return 0;

}