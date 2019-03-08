#include <stdio.h>
/*
Performance Lab 8A
Stephen Barton Jr
11 February 2019
Healthy Substitutions
*/

int replace_character(char * string, const char findThisChar, const char replaceItWithThis);

int main()
{
    char PickAChar = 'o';
    char ReplaceWithChar = 'x';
    char charmander[22] = {0};
    char * buff[] = {charmander};
    charmander[0] = 'I';
    charmander[1] = '\n';
    charmander[2] = 'd';
    charmander[3] = 'o';
    charmander[4] = '\n';
    charmander[5] = 'n';
    charmander[6] = 'o';
    charmander[7] = 't';
    charmander[8] = '\n';
    charmander[9] = 'k';
    charmander[10] = 'n';
    charmander[11] = 'o';
    charmander[12] = 'w';
    charmander[13] = '\n';
    charmander[14] = 'w';
    charmander[15] = 'h';
    charmander[16] = 'a';
    charmander[17] = 't';
    charmander[18] = 's';
    charmander[19] = '\n';
    charmander[20] = 'u';
    charmander[21] = 'p';

    int charsReplaced = replace_character(*buff, PickAChar, ReplaceWithChar);
    printf("%i characters replaced\n", charsReplaced);
    printf("%s\n", charmander);
    return(0);
}
int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
    int counter=0;
    for(int i=0;i<22;i++) //for loop to replace characters
    {
        if (string[i]== findThisChar)
        {
            string[i] = replaceItWithThis;
            counter++;
        }
    }
    return(counter);
}