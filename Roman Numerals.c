#include <stdio.h> 
#include <stdlib.h>
#include <string.h> //included for strcmp to work

/*
Stephen Barton Jr
Personal Project
Prompt #4
18 MAR 2019
*/

int main()
{   
    //variable for the password
    char password[] = "idf"; 
    printf("Have you ever wanted to see numbers ranging from 1 to 100 in Roman Numerals?\n");
    printf("I know i have, so with this fancy little thing called google you can just search for a table that shows you the numbers!\n");
    printf("Just kidding, youre stuck using my program. Why use google when you can use me to make you a table?\n");
    printf("All you need is a password to see it.\n");
    printf("Soooo..... Whats the password?\n");
    //store password for comparison
    scanf("%s", password);

    //compares the strings to see if user input is equal to password
    //if they are equal, print the table
    if(strcmp(password, "idf") == 0) 
    {
    //clears screen after inputting password
    system("clear");     
    printf("WoW, yOu'Re So SmArT\n\n"); 
    int decimal, roman;
    //table header
    printf("-------------------\n");
    printf("|Decimal | Roman  |\n");
    printf("|number  | numeral|\n");
    printf("-------------------\n");

    //for loop to keep the range between 1 and 100
    for(decimal=1; decimal<=100; decimal++) 
    {
        //set variables equal to each other so they print together 
        roman=decimal;
        printf("%d          ",roman);
        //if the number is 100 you print C and thats the end of the loop
        if(roman==100) 
        {
            printf("C");
            roman=0;
        }
        //if the number is 50 or more you print L and subtract 50 from the number
        if(roman>=50) 
        {
            printf("L");
            roman-=50;
        }
        //after subtracting 50, if the number is still greater than 40 
        //ensures you dont have X repeating more than 3 times
        if(roman>=40)
        {
            printf("XL");
            roman-=40;
        }
        //while the number is greater than 10
        while(roman>=10) 
        {
            printf("X");
            roman-=10;
        }
        //if the number is greater than 5
        if(roman>=5) 
        {
            //only if the number is specifically 9
            //ensures that I doesnt repeat 4 times
            if(roman%10==9) 
            {
                printf("IX");
                roman-=9;
            }
            else 
            {
                printf("V");
                roman-=5;
            }   
        }
        //while the number is greater than 0
        while(roman>0) 
        {
            //only if number is 4
            //ensure I doesnt repeat 4 times
            if(roman%10==4) 
            {
                printf("IV");
                roman-=4;
            }
            else 
            {
                printf("I");
                roman-=1;
            }
            
        }
        printf("\n");
    }
    }
    else
    {
        system("clear");
        printf("Nothing Personnel Kid, just go use google...\n");
    }
    
    return 0;
}