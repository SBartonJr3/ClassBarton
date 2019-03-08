#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int temp;
    int choice;
    float celsius = 273.15;
    float fahrenheit;

 
    

    printf("0)Exit\n1)Celsius to Kelvin\n2)Fahrenheit to Kelvin\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 0:
            return 0;
            break;
        case 1:
            printf("What is the temperature in Celsius?\n");
            scanf("%d", &temp);
            printf("The temperature in Kelvin is %.3f degrees!\n", temp+273.15);
            return 0;
        case 2:
            printf("What is the temperature in Fahrenheit?\n");
            scanf("%d", &temp);
            printf("The temperature in Kelvin is %.3f degrees!\n", (temp+459.67)*(5.0/9.0));
            return 0;
        default:
            printf("That is not a valid choice.\n");
            main();
    }


}