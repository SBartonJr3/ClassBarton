//cube a variable using passby reference with a pointer argument

#include <stdio.h>

void cubeByReference(int *nPtr); //prototype

int main(void)

{
    int number = 5; //initialize

    printf("Original value of number is %d", number);

    //pass address of number to cubeByReference
    cubeByReference(&number);

    printf("\nNew value is %d\n", number);
}//end main

//calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; //cube *nPtr
} // end function cubeByReference