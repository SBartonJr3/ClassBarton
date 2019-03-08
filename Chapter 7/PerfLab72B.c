#include <stdio.h>
#include <math.h>

/*  Perf Lab 72B
*   Author: Stephen Barton Jr
*   Date: 07 FEB 2019
*   Project: Perf Lab 72B
*/

int main(void)

{
int integer = 0;
int bitChecker = 0x01;
bitChecker = bitChecker << 15;

fprintf(stdout, "Pick a number, any number: \n");
fscanf(stdin, "%d", &integer);

if ((integer & bitChecker) > 0 )
{
    fprintf(stdout, "That's a negative ghost rider.\n");
}
else
{
    fprintf(stdout,"The binary is: ");
    while(bitChecker > 0)
        {
        if((integer & bitChecker) > 0)
        {
        fprintf(stdout, "1");
        }
        else
        {
        fprintf(stdout, "0");
        }
        bitChecker = bitChecker >> 1;
    }
    fprintf(stdout, "\nAfter the flip, the binary is now: ");
    bitChecker = 0x01;
    bitChecker = bitChecker << 15;
    integer = integer | bitChecker;

    while(bitChecker > 0)
    {
        if((integer & bitChecker) > 0)
        {
        fprintf(stdout, "1");   
        }
        else
        {
        fprintf(stdout, "0");
        }
    bitChecker = bitChecker >> 1;
}
}
printf("\n");
return 0;
}