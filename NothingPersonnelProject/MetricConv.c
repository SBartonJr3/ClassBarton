#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h> //idk if i needed this

int main()
{
char password[] = "idf";    
printf("Have you ever wanted to see convert units of measurements for no reason whatsoever?\n");
printf("I know i have, so with this fancy little thing called google you can just search for a converter!\n");
printf("Just kidding, youre stuck using my program. Why use google when you can use me to make you a converter with limited conversions?\n");
printf("All you need is a password to see it.\n");
printf("Soooo..... Whats the password?\n");
//store password for comparison
scanf("%s", password);

if(strcmp(password, "idf") == 0)
{   
    int choice1, choice2, choice3, choice4;

    printf("Welcome to the converter, Would you like to convert to or from Metric?\n");
    printf("1) To Metric\n2) From Metric\n");
    scanf("%d", &choice1);
    //if you wanna do to metric
    if(choice1 == 1)
    {   
        int value;
        printf("Disclaimer: If values are too small they may show up as 0.00, in that case. Use google :)");
        printf("So you want to convert to Metric huh?\n");
        printf("1) Weight\n2) Length\n3) Volume\n");
        scanf("%d", &choice2);
            
        switch(choice2)
    {       
            //to conver weight
            case 1:
                printf("Do you want to convert from pounds or ounces\n");
                printf("1) Pounds\n2) Ounces\n");
                scanf("%d", &choice3);
                if(choice3 == 1)
                {
                    printf("Now do you want to convert to milligrams, grams, or kilograms?\n");
                    printf("1) Milligrams\n2) Grams\n3) Kilograms\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        //if you wanna convert Pounds
                        case 1:
                            printf("How many Pounds are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Pounds is %.2f Milligrams!\n", value, (value * 453592.37));
                            return 0;
                        case 2:
                            printf("How many Pounds are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Pounds is %.2f Grams!\n", value, (value * 453.592));
                            return 0;
                        case 3:
                            printf("How many Pounds are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Pounds is %.2f Kilograms!\n", value, (value/2.205));
                            return 0;
                        default:
                            printf("You done messed up.\n");
                            return 0;
                    }    
                }
                else if(choice3 == 2)
                {
                    printf("Now do you want to convert to milligrams, grams, or kilograms?\n");
                    printf("1) Milligrams\n2) Grams\n3) Kilograms\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {   
                        //if you wanna convert Ounces
                        case 1:
                            printf("How many ounces are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Ounces is %.2f Milligrams!\n", value, (value * 28349.523));
                            return 0;
                        case 2:
                            printf("How many ounces are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Ounces is %.2f Grams!\n", value, (value * 28.35));
                            return 0;
                        case 3:
                            printf("How many ounces are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Ounces is %.2f Kilograms!\n", value, (value/35.274));
                            return 0;
                        default:
                            printf("You done messed up.\n");
                            return 0;
                    }    
                
                }
                else
                {
                    printf("We came so far...\n");
                    return 0;
                }
            //to convert length      
            case 2:
                printf("Do you want to convert from Inches, Feet, or Miles?\n");
                printf("1) Inches\n2) Feet\n3) Miles\n");
                scanf("%d", &choice3);
                if(choice3 == 1)
                {   
                    printf("Now do you want to convert to Centimeters, Meters, or Kilometers?\n");
                    printf("1) Centimeters\n2) Meters\n3) Kilometers\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {   
                        //if you wanna convert inches
                        case 1:
                            printf("How many inches are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Inches is %.2f Centimeters!\n", value, (value * 2.54));
                            return 0;
                        case 2:
                            printf("How many inches are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Inches is %.2f Meters!\n", value, (value/39.37));
                            return 0;
                        case 3:
                            printf("How many inches are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Inches is %.2f Kilometers!\n", value, (value/39370.079));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    }
                    
                }
                else if(choice3 == 2)
                {
                    printf("Now do you want to convert to Centimeters, Meters, or Kilometers?\n");
                    printf("1) Centimeters\n2) Meters\n3) Kilometers\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {    
                        //if you wanna convert Feet
                         case 1:
                            printf("How many Feet are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Feet is %.2f Centimeters!\n", value, (value * 30.48));
                            return 0;
                        case 2:
                            printf("How many Feet are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Feet is %.2f Meters!\n", value, (value/3.281));
                            return 0;
                        case 3:
                            printf("How many Feet are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Feet is %.2f Kilometers!\n", value, (value/3280.84));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    }
                }
                else if(choice3 == 3)
                {
                    printf("Now do you want to convert to Centimeters, Meters, or Kilometers?\n");
                    printf("1) Centimeters\n2) Meters\n3) Kilometers\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {   
                        //if you wanna convert miles
                        case 1:
                            printf("How many Miles are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Miles is %.2f Centimeters!\n", value, (value * 160934.4));
                            return 0;
                        case 2:
                            printf("How many Miles are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Miles is %.2f Meters!\n", value, (value * 1609.344));
                            return 0;
                        case 3:
                            printf("How many Miles are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Miles is %.2f Kilometers!\n", value, (value * 1.609));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    }
                }
                else
                {
                    printf("It's okay, i expect nothing less from you...\n");
                    return 0;
                }
            //to convert volume    
            case 3:
                printf("Do you want to convert from Gallons or Pints\n");
                printf("1) Gallons\n2) Pints\n");
                scanf("%d", &choice3);
                    if(choice3 == 1)
                    {
                        printf("Now do you want to convert to Liters or Milliters?\n");
                        printf("1) Liters\n2) Milliliters\n");
                        scanf("%d", &choice4);
                        switch(choice4)
                        {
                            //if you wanna convert Gallons
                            case 1:
                                printf("How many Gallons are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Gallons is %.2f Liters!\n", value, (value * 3.785));
                                return 0;
                            case 2:
                                printf("How many Gallons are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Gallons is %.2f Milliliters!\n", value, (value * 3785.412));
                                return 0;
                            default:
                                printf("Can you just pick the right number? Start Over!");
                                return 0;
                        }
                    }
                    else if(choice3 == 2)
                    {
                        printf("Now do you want to convert to Liters or Milliters?\n");
                        printf("1) Liters\n2) Milliliters\n");
                        scanf("%d", &choice4);
                        switch(choice4)
                        {   
                            //if you wanna convert Pints
                            case 1:
                                printf("How many Pints are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Pints is %.2f Liters!\n", value, (value/2.113));
                                return 0;
                            case 2:
                                printf("How many Pints are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Pints is %.2f Milliliters!\n", value, (value * 473.176));
                                return 0;
                            default:
                                printf("Can you just pick the right number? Start Over!");
                                return 0;
                        }
                    }
                    else
                    {
                        printf("Can't you just get one thing right?");
                        return 0;
                    }
    }
    }
    //to convert from metric
    else if(choice1 == 2)
    {   
        int value;
        printf("Disclaimer: If values are too small they may show up as 0.00, in that case. Use google :)");
        printf("So you want to from Metric\n");
        printf("1) Weight\n2) Length\n3) Volume\n");
        scanf("%d", &choice2);

        switch(choice2)
    {       
            //to convert weight
            case 1:
                {       
                printf("Do you want to convert from Milligrams, Grams, or Kilograms?\n");
                printf("1) Milligrams\n2) Grams\n3)Kilograms\n");
                scanf("%d", &choice3);
                if(choice3 == 1)
                {
                    //if you wanna convert Milligrams
                    printf("Now do you want to convert to Pounds or Ounces?\n");
                    printf("1) Pounds\n2) Ounces\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Milligrams are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Milligrams is %.2f Pounds!\n", value, (value * .0000022046));
                            return 0;
                        case 2:
                            printf("How many Ounces are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Milligrams is %.2f Ounces!\n", value, (value * .000035274));
                            return 0;
                        default:
                            printf("UGH, GOODBYE...");
                            return 0;
                    }
                }
                else if(choice3 == 2)
                {
                    //if you wanna convert Grams
                    printf("Now do you want to convert to Pounds or Ounces?\n");
                    printf("1) Pounds\n2) Ounces\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Grams are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Grams is %.2f Pounds!\n", value, (value * .0022046));
                            return 0;
                        case 2:
                            printf("How many Grams are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Grams is %.2f Ounces!\n", value, (value * .035274));
                            return 0;
                        default:
                            printf("UGH, GOODBYE...");
                            return 0;
                    }
                }
                else if(choice3 == 3)
                {
                    //if you wanna convert kilograms
                    printf("Now do you want to convert to Pounds or Ounces?\n");
                    printf("1) Pounds\n2) Ounces\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Kilograms are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Kilograms is %.2f Pounds!\n", value, (value * 2.2046));
                            return 0;
                        case 2:
                            printf("How many Kilograms are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Kilograms is %.2f Ounces!\n", value, (value * 35.274));
                            return 0;
                        default:
                            printf("UGH, GOODBYE...");
                            return 0;
                }
                }
                }
            //to convert length
            case 2:
                printf("Do you want to convert from Centimeters, Meters, or Kilometers?\n");
                printf("1) Centimeters\n2) Meters\n3) Kilometers\n");
                scanf("%d", &choice3);
                if(choice3 == 1)
                {
                    //if you wanna convert centimeters
                    printf("Now do you want to convert to Inches, Feet, Miles?\n");
                    printf("1) Inches\n2) Feet\n3) Miles\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Centimeters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Centimeters is %.2f Inches!\n", value, (value * .39370));
                            return 0;
                        case 2:
                            printf("How many Centimeters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Centimeters is %.2f Feet!\n", value, (value * .032808));
                            return 0;
                        case 3:
                            printf("How many Centimeters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Centimeters is %.2f Miles!\n", value, (value * .0000062137));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    }
                    
                }
                else if(choice3 == 2)
                {   //if you wanna convert meters
                    printf("Now do you want to convert to Inches, Feet, Miles?\n");
                    printf("1) Inches\n2) Feet\n3) Miles\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Meters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Meters is %.2f Inches!\n", value, (value * 39.370));
                            return 0;
                        case 2:
                            printf("How many Meters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Meters is %.2f Feet!\n", value, (value * 3.2808));
                            return 0;
                        case 3:
                            printf("How many Meters are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Meters is %.2f Miles!\n", value, (value * .00062137));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    }
                    
                }
                else if(choice3 == 3)
                {   //if you wanna convert kilometers
                    printf("Now do you want to convert to Inches, Feet, Miles?\n");
                    printf("1) Inches\n2) Feet\n3) Miles\n");
                    scanf("%d", &choice4);
                    switch(choice4)
                    {
                        case 1:
                            printf("How many Kilometers are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Kilometers is %.2f Inches!\n", value, (value * 39370));
                            return 0;
                        case 2:
                            printf("How many Kilometers are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Kilometers is %.2f Feet!\n", value, (value * 3280.8));
                            return 0;
                        case 3:
                            printf("How many Kilometers are you trying to convert?\n");
                            scanf("%d", &value);
                            printf("%d Kilometers is %.2f Miles!\n", value, (value * .62137));
                            return 0;
                        default:
                            printf("Yikes.\n");
                            return 0;
                    } 
                }
            //to convert volume
            case 3:
                printf("Do you want to convert from Liter or Milliliters\n");
                printf("1) Liters\n2) Milliliters\n");
                scanf("%d", &choice3);
                    if(choice3 == 1)
                    {   
                        //if you wanna convert Liters
                        printf("Now do you want to convert to Gallons or Pints?\n");
                        printf("1) Gallons\n2) Pints\n");
                        scanf("%d", &choice4);
                        switch(choice4)
                        {
                            case 1:
                                printf("How many Liters are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Liters is %.2f Gallons!\n", value, (value * .26417));
                                return 0;
                            case 2:
                                printf("How many Liters are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Liters is %.2f Pints!\n", value, (value * 2.1134));
                                return 0;
                            default:
                                printf("Can you just pick the right number? Start Over!");
                                return 0;
                        }
                    }
                    //if you wanna convert Milliliters
                    else if(choice3 == 2)
                    {
                        printf("Now do you want to convert to Gallons or Pints?\n");
                        printf("1) Gallons\n2) Pints\n");
                        scanf("%d", &choice4);
                        switch(choice4)
                        {
                            case 1:
                                printf("How many Milliliters are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Milliliters is %.2f Gallons!\n", value, (value * .00026417));
                                return 0;
                            case 2:
                                printf("How many Milliliters are you trying to convert?\n");
                                scanf("%d", &value);
                                printf("%d Milliliters is %.2f Pints!\n", value, (value * .0021134));
                                return 0;
                            default:
                                printf("Can you just pick the right number? Start Over!");
                                return 0;
                        } 
                    }
            default:
                printf("You annoy me.\n");
                return 0;
    }
    }
    else
    {
        printf("I don't know what to do with you, i gave you two options, i can only do so much here.\n");
        return 0;
    }
}
else
{
    printf("Better luck next time kiddo, or maybe just use google.");
}
    return 0;
}