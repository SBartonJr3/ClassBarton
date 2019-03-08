#include <stdio.h>

/*  Demo Lab 1
*   Author: Stephen Barton
*   Date: 02 FEB 2019
*   Project: demolab_1
*/

int main(void)
{
int myIntArray[10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
float myFloatArray [5] = {1, 2, 3, 4, 5};
char myCharArray [256] = {0};

myCharArray [0] = 'B';
myCharArray [1] = 'A';
myCharArray [2] = 'R';
myCharArray [3] = 'T';
myCharArray [4] = 'O';
myCharArray [5] = 'N';

myFloatArray[0] = myFloatArray[0] * 1.1;
myFloatArray[1] = myFloatArray[1] * 1.1;
myFloatArray[2] = myFloatArray[2] * 1.1;
myFloatArray[3] = myFloatArray[3] * 1.1;
myFloatArray[4] = myFloatArray[4] * 1.1;

myIntArray[0] = myIntArray[0+1] * 10;
myIntArray[1] = myIntArray[1+1] * 10;
myIntArray[2] = myIntArray[2+1] * 10;
myIntArray[3] = myIntArray[3+1] * 10;
myIntArray[4] = myIntArray[4+1] * 10;
myIntArray[5] = myIntArray[5+1] * 10;
myIntArray[6] = myIntArray[6+1] * 10;
myIntArray[7] = myIntArray[7+1] * 10;
myIntArray[8] = myIntArray[8+1] * 10;
myIntArray[9] = myIntArray[9+1] * 10;


printf("%d\n", myIntArray[2]);
printf("%f\n", myFloatArray[2]);
printf("%c\n", myCharArray[2]);

return 0;
}