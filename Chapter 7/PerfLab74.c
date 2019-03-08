#include <stdio.h>

/* Performance Lab 7.4 A
/ Stephen Barton
/1 1 February 2018
*/



int main()
{
    
    unsigned int x = 0;
    int y = 0;

    
    do
    { 
        y = 0;
        printf("Please input a positive number: "); //inputs a number and stores it
        fscanf(stdin,"%u",&x);
        if(x > 999) //if number is higher than 999
        {
            printf("that number is way to big for my puny brain\n");
            break;
        }
        for(int z = 1; z <= x; z++)
        {
            if((x%z) == 0 && y < 20) //if x is divisible by z, print number
            {
                printf("%d ", z);
                y++;
            }
            else if(y >= 20) //breaks if there are more than 20 numbers
            {
                break;
            }
        }
        printf("\n");
    } while (x <= 999); //repeats the process

    return 0;
}
