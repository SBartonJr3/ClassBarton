#include <stdio.h>

int main(void)
{
    int month = 0; int day = 0; int year = 0; 

    printf("Enter today's date as mm-dd-yyyy \n");
    
    scanf("%d-%d-%d", &month, &day, &year);


    printf("Today's date is:  %02d/%02d/%04d \n", month, day, year);

    return 0;
}