#include <stdio.h>

/*  PerfLab73B
*   Stephen Barton Jr
*   08 February 2019
*   Project: PerformanceLab 7.3B
*/   

int main()
{
    char phrase [] = {"End\nMy\nSuffering\0"};
    int i = 0; // counter variable initialized
    
   while(phrase[i] != '\0') // checks for null
   {
     printf("%c",phrase[i]);
     if(phrase[i] == '\n')  // checks for newline
       {
           break;
       }
       i++; //adds one to the counter
   }
   return 0;

}