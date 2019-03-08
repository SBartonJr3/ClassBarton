#include <stdio.h>

/*  Performance Lab 4D 
*   Author: Stephen Barton Jr
*   Date: 04 FEB 2019
*   Project: perfLab_4D
*/

int main(void)

{
    //part1 variables
    char First[256] = {0};
    char Middle[256] = {0};
    char Last[256] ={0};
    
    //part2 variables
    int Num1 = 0;
    int Num2 = 0;
    
    
    //part1 prompts
    printf("Enter your name, seperating each name by a Tab: ");
    scanf("%32s\t%32s\t%32s", &First, &Middle, &Last);
    

    //part2 prompts
    printf("Enter two numbers seperated by a * : ");
    scanf("%256d*%256d", &Num1, &Num2);
    
    //Both Parts final print statements
    printf("Your name is : \n%s\t\n%s\t\n%s\t\n", First, Middle, Last);
    printf("%d multiplied by %d is %d", Num1, Num2, Num1 * Num2);
    printf("\n");

    return 0;

}