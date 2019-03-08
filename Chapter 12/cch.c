/*
copy by Char
Stephen Barton Jr
26 Feb 2019

    “Content Copy”

    Open an existing file in read mode.
    Open a new file in write mode.
    Copy the existing file into the new file char-by-char.
    Close the existing file.
    Close and open the new file in read mode.
    Print the new file char-by-char.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fptr1, *fptr2;
    char charIZARD;

    fptr1 = fopen ("Mumford and Sons","r");     // Opens Mumford and Sons in read mode
    fptr2 = fopen ("CopyByChar","w");           // Opens new file, CopyByChar, in write mode

    while (1)
    {
        charIZARD = getc(fptr1);

        if( charIZARD != EOF)
        {
            putc(charIZARD, fptr2);
        }
        else
        {
            break;
        }

    }
    printf(" Your file has been copied, i think, probably wanna double check to be sure...\n");
    fclose (fptr1);   //Closes both files
    fclose (fptr2);
    fopen ("CopyByChar", "r"); //open the new file, CopyByChar, in read mode.
    

    return 0;
}

