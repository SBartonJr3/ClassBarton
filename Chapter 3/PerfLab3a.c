#include <stdio.h>

/*  Performance Lab 3A
*   Author: Stephen Barton
*   Date: 02 FEB 2019
*   Project: perfLab_3A
*/

int main(void)
{
    int VeryOldPeople[10] = {0};
    
    VeryOldPeople[0] = 12;
    VeryOldPeople[1] = 23;
    VeryOldPeople[2] = 14;
    VeryOldPeople[3] = 46;
    VeryOldPeople[4] = 32;
    VeryOldPeople[5] = 6;
    VeryOldPeople[6] = 89;
    VeryOldPeople[7] = 102;
    VeryOldPeople[8] = 2;
    VeryOldPeople[9] = 76;

    int i = 0;
    for (i=0; i < 10; i++)  //for loop going through VeryOldPeople variable

    {
        printf("My Instructor or classmates age is [%d] : %d\n", i, VeryOldPeople[i]); //prints values
    }
    
    char MyFavSaying[256] = {"\nnice\nmeme"};

    MyFavSaying[256] = 0;
        
    printf("My favorite saying is : %s\n", MyFavSaying); //prints saying
   
    return 0;
}
