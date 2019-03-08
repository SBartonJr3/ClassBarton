#include <stdio.h>
/*
Stephen Barton
PerfLab10.6A
20 FEB 2019
*/

#define STRINGS(x) #x
#define CAT(x, y) STRINGS (x##y)
#define buff 64
#define QUOTEME(x,y) "\""CAT(x,y)"\""

int main()
{
    
    puts(CAT(I DONT KNOW, WHATS GOING ON)); //combines strings
    
    char combinedArray[buff] = {QUOTEME(I DONT KNOW, WHATS GOING ON)}; //adds quotes

    puts(combinedArray); //prints combined strings

    return 0;
}







