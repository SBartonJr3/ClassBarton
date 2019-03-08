#include <stdio.h>

/*  Perf Lab 72D
*   Author: Stephen Barton Jr
*   Date: 08 FEB 2019
*   Project: Perf Lab 72D
*/

int main(void)
{
char Choosethis = 0; 
int var1 = 0;   
int var2 = 0;

printf("Enter two numbers seperated by a math operator: \n");
scanf("%i%c%i", &var1, &Choosethis, &var2);

switch(Choosethis)
{
    //case for multiplication
    case '*':
        printf("%i * %i = %i\n", var1, var2, var1 * var2); 
        break;
    //case for division
    case '/':
        printf("%i / %i = %.2lf\n", var1, var2, ((double)var1 / var2));
        break;
    //case for addition
    case '+':
        printf("%i + %i = %i\n", var1, var2, var1 + var2);
        break;
    //case for subtraction
    case '-':
        printf("%i - %i = %i\n", var1, var2, var1 - var2);
        break;
    //case for modulus    
    case '%':
        printf("%i %% %i = %i\n", var1, var2, var1 % var2);
        break;
    //if you dont know how to follow directions
    default:
        printf("You done messed up A-a-ron\n");
        break;
}

return 0;
}