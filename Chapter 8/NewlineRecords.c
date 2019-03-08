#include <stdio.h>

int remove_newline(char * buffer);

int main()
{
    char charmander[22] = {0};
    char *buff[] = {charmander};
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

    int counter1 = remove_newline(*buff);
    printf("%i\n",counter1);
    return(0);
}

int remove_newline(char * buffer)
{
    int counter=0;
    for(int i=0;i<22;i++)
    {
        if (buffer[i]=='\0')
        {
            printf("ERR_NULL_POINTER");
            break;
        }
        else if(buffer[i]=='\n')
        {
            buffer[i]=' ';
            counter++;
            
        }
    }
    return(counter);

}