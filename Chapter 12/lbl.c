#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char AllLines;

    fptr1 = fopen("Mumford and Sons", "r");
    fptr2 = fopen("Copydatsong", "w");

    if(fptr1 != NULL)
    {
        while(!feof(fptr1))
        {
            AllLines = fgetc(fptr1);
            fputc(AllLines, fptr2);
        }
        printf("I Think i did it, that song has been copied.\n");
        fclose(fptr1);
        fclose(fptr2);
    }
    else
    {
        printf("well that didnt work");
    }
}