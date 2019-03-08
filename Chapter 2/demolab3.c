#include <stdio.h>

int main(void)
{
    int integer = 77;
    float float1 = 4.6;
    double double1 = 6.9;
    char char1 = 'S';

    printf("your int: %d cast to a float: %f \n", integer, (float) integer);
    printf("your int: %d cast to a char: %c \n", integer, (char) integer);
    printf("your float: %f cast to a double: %lf \n", float1, (double) float1);
    printf("your double: %lf cast to a float: %f \n", double1, (float) double1);
    printf("your char : %c cast to an int: %d \n", char1, (int) char1);
    printf("63 cast to a char: %c \n", (char) 63);

    return 0;
}