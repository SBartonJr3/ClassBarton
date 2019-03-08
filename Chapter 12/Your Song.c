#include <stdio.h>

int main()
{
    FILE *song;
    char lyrics[256];

    song = fopen("/home/student/Desktop/CProgramming/Chapter 12/Mumford and Sons", "r");
    if(song != NULL)
    {
        while(!feof(song))
        {
            fgets(lyrics,256, song);
            printf("%s\n", lyrics);
        }
        fclose(song);
    }
    else
    {
        printf("ERROR: THERE IS A PROBLEM");
    
    }

    return 0;
}