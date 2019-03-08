#include <stdio.h>

/* Performance Lab 7.5
/  Stephen Barton Jr
/  11 February 2019
*/


int main()
{
    int x = 0;
    printf("Input a 0 for even numbers or a 1 for odd numbers: "); //prompts for input
    scanf("%d",&x);
    if(x == 0)  //if input is 0 
    {
        for(int i = 0; i<51; i++)
        {
            printf("%d ",x); //prints even numbers
            x += 2;
        }
    }
    else if(x == 1) //if input is 1
    {
        for(int i = 1; i<51; i++)
        {
            printf("%d ",x); //prints odds
            x += 2;
        }
    }
    else  //if neither 1 or 0 is inputted
    {
        printf("How hard is it to follow simple directions?\n");
        main();  //brings back to main
    }
    printf("\n");
}
