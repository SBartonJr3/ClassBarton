//cube a variable using pass by value
#include <stdio.h>

int cubeByValue (int n); //prototype

int main(void)
{
    int number = 5; //intitialize number
    printf("The original value is %d", number);

    //pass the number by value to cubeByValue
    number = cubeByValue( number );

    printf("\nthe new value of the number is %d\n", number);
}//end main

//calculate and return cube of integer argument
int cubeByValue(int n)
{
return n*n*n; //cube local variable n and return result    
}//end function cubeByValue