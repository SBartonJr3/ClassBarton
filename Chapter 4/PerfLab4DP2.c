#include <stdio.h>

/*  Performance Lab 4D Part1
*   Author: Stephen Barton Jr
*   Date: 04 FEB 2019
*   Project: perfLab_4DP1
*/

int main(void)

{
    int Num1 = 0;
    int Num2 = 0;

    printf("Enter two numbers seperated by a * : ");
    
    scanf("%256d*%256d", &Num1, &Num2);

    printf("%d multiplied by %d is %d", Num1, Num2, Num1 * Num2);

    printf("\n");

    return 0;

}