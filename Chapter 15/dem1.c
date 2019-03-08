#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _DEBUG
#define NDEBUG
#endif
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//define step1

#define BUFF_SIZE 16

int main(void)
{
    char * inputString = (char *)calloc(BUFF_SIZE, sizeof(char));
    assert(inputString);            //assert that inputstring is not NULL

#ifdef step1  
    //do step1 stuff here
    fgets(inputString, BUFF_SIZE, stdin);

#else   
    //do other non step1 stuff
    scanf("%s", inputString);

#endif

    assert(inputString[BUFF_SIZE - 1] == '\0');
    puts(inputString);

    return 0;

}