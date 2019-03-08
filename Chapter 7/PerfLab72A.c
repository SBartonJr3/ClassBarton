#include <stdio.h>


/*  Perf Lab 72A
*   Author: Stephen Barton Jr
*   Date: 07 FEB 2019
*   Project: Perf Lab 72A
*/

int main(void)

{

char arrayz[256] = {0}; //zeroized array initialized
printf("Enter a statement to be stored that will scare your enemies: ");
scanf("%255[^\n]s", arrayz); //stores string for later

if(arrayz[0] >= 32 && arrayz[0] < 126)
    {
    printf("%s", arrayz);
    //prints string if ascii character is between 32 and 126
    }
else
    {
    printf("following directions isn't hard noob.");  
    //if you input something not between 32 and 126
    }
printf("\n");
return 0;
}