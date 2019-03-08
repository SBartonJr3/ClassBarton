#include <string.h>
#include <stdio.h>

/*  Performance Lab 3B
*   Author: Stephen Barton
*   Date: 02 FEB 2019
*   Project: perfLab_3B
*/

int main(void)
{
    char myPhrase[256] = {0};
    myPhrase[0] = 'U';
    myPhrase[1] = 'n';
    myPhrase[2] = 'l';
    myPhrase[3] = 'o';
    myPhrase[4] = 'a';
    myPhrase[5] = 'd';
    myPhrase[6] = '\n';     
    myPhrase[7] = 'T';
    myPhrase[8] = 'h';
    myPhrase[9] = 'e';
    myPhrase[10] = '\n';
    myPhrase[11] = 'T';
    myPhrase[12] = 'o';
    myPhrase[13] = 'a';
    myPhrase[14] = 'd';
    myPhrase[256] = 0;

    int i = 0; 
    for(i=0; i < 256; i++)              //added for loop to print out the phrase
    {
        printf("%d", myPhrase[i]);
    }

    //printf("My phrase is:\n%s\n", myPhrase);
    //printf("The length of my saying is %d\n", (strlen(myPhrase)));

    return 0;
}