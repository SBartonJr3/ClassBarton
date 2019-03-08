#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <errno.h>
#include <stdio.h>

void error_reporting(int currErrno);

int main(void)
{
    int currentErrno = 0;
    char currentChar = 0;

    //open existing file
    FILE * weirdFile = fopen("/home/student/Desktop/CProgramming/getmeout", "r");

    //store the errno
    currentErrno = errno;

    if(!weirdFile)
    {
        //rint error mess utulizing string w/errno
        error_reporting(currentErrno);

        //immediately utilize errno as the return value
        return currentErrno;
    }
    else
    {
        //utilize feof() to read a file char by  char until the end
        while(!feof(weirdFile))
        {
            currentChar = getc(weirdFile); //read a charand...
            putchar(currentChar);       //print a char

        }
    }
    printf("\n");
return 0;
}

void error_reporting(int currErrno)
{
    char* errStr;
    if (currErrno)
    {
        perror("Error");
    }
    return;
}