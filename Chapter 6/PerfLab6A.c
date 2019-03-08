#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

/*  Perf Lab 6A
*   Author: Stephen Barton Jr
*   Date: 07 FEB 2019
*   Project: Perf Lab 6A
*/

int main(void)

{
    uint32_t UserInput = 0;
    uint32_t bitChecker = 0x01;
    int counter = 0;
    printf("Input a positive number:  \n");
	fscanf(stdin, "%u", &UserInput);

    bitChecker = bitChecker << 31; //Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
    
    printf("Your number in binary is: \n");
 
    while(bitChecker > 0)
    {
        if((counter % 4)==0 && counter != 0)

        {
            printf(" ");
        }

        if((UserInput & bitChecker) ==0)
        {
            printf("0");
        }

        else
        {
            printf("1");
        }
        
        bitChecker = bitChecker >> 1; //shifts bit to the left
        counter++;
    }
    printf("\n");
    return 0;
}