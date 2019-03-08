/*
Calculator
Stephen Barton Jr  
11 February 2019
*/

#include<stdio.h>
#include <math.h>

int main(){

int a;
int b;
int choice;

printf("[0] Exit\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\n\n"); //menu to choose what operation you wanna do
scanf("%d", &choice);

switch(choice)
{
    case 0:
        return 0; //if you decide maths isnt for you
        break;
    case 1:
        printf("Enter 1st number:\n");      //if you wanna add
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("%d + %d = %d\n", a, b, a+b);
        main();
    case 2:
        printf("Enter 1st number:\n"); //if you wanna subtract
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("%d - %d = %d\n", a, b, a-b);
        main();
    case 3:
        printf("Enter 1st number:\n"); //if you wanna multiply
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("%d * %d = %d\n", a, b, a*b);
        main();
    case 4:
        printf("Enter 1st number:\n"); //if you wanna divide
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("%d / %d = %d\n", a, b, a/b);
        main();
    default:
        printf("That is not a valid choice.\n"); //if you dumb and cant enter the right number
        main();

}
}