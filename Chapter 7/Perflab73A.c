#include <string.h>
#include <stdio.h>

/*  Performance Lab 73A
*   Author: Stephen Barton
*   Date: 08 FEB 2019
*   Project: perfLab_73A
*/

int main(void)
{
    char myPhrase[256] = {0};
    myPhrase[0] = 85;
    myPhrase[1] = 110;
    myPhrase[2] = 108;
    myPhrase[3] = 111;
    myPhrase[4] = 97;
    myPhrase[5] = 100;
    myPhrase[6] = '\n';
    myPhrase[7] = 84;
    myPhrase[8] = 104;
    myPhrase[9] = 101;
    myPhrase[10] = '\n';
    myPhrase[11] = 84;
    myPhrase[12] = 111;
    myPhrase[13] = 97;
    myPhrase[14] = 100;
    myPhrase[15] ='\n';
    myPhrase[16] = 0;

    int i = 0; 
    for(i=0; i < 16; i++)              //added for loop to print out the phrase
    {
        printf("%c", myPhrase[i]);
    }

    //printf("My phrase is:\n%s\n", myPhrase);
    //printf("The length of my saying is %d\n", (strlen(myPhrase)));

    return 0;
}
