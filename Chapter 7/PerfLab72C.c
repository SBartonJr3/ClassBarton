#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

/*  Perf Lab 72C
*   Author: Stephen Barton Jr
*   Date: 07 FEB 2019
*   Project: Perf Lab 72C
*/

int main(void)
{
int variable1 = 0;
int variable2 = 0;
int variable3 = 0;

printf("enter two integers seperated by a tab: ");
scanf("%d\t%d", &variable1, &variable2);

if (variable1 == variable2)
{
printf("ERROR"); //prints an error if var1 and 2 are equal
printf("\n");
}
else if (variable1 > variable2)
{
variable3 = variable1; //var3 becomes equal to var1 if var1 is greater than var2
}
else
{
variable3 = variable2; //var3 becomes equal to var 2 if var2 is greater than var1
}

if (variable1 + variable2 + variable3 > 2)
{
printf("variable1 + variable2 + variable3 = %d\n", variable1 + variable2 + variable3);
//prints sum of 3 variables if they are greater than 2
}
else
{
printf("These variables dont even add up to more than 2!\n");    
//printed if not greater than 2

return 0;
}