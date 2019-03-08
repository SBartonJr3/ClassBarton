#include <stdio.h>

int main()
{
    //Declare pointer
    FILE *readRangers;
    //Stores each character
    char powerR = 0;
    //Opens file
    readRangers = fopen("/home/student/Desktop/CProgramming/Chapter 12/powerrangers", "r");
    //Runs if file was opened
    if(readRangers != NULL)
    {
        //Runs until end of file
        while(!feof(readRangers))
        {   
            //Store each character separately
            powerR = fgetc(readRangers);
            //Hacky way to get rid of question mark character using ASCII values.
            if(powerR >= 8)
            {
                printf("%c", powerR);
            }
        }
        printf("\n");
        //Close file
        fclose(readRangers);
    }
    else
    {
        printf("No morphing for you.\n");
    }
}