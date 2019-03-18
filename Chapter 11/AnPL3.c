//copying a string using array notation and pointer notation.
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2); //prototpe
void copy2(char *s1, const char *s2); //prototype

int main( void)
{
    char string1[SIZE]; //create array string1
    char *string2 = "Hello"; //create pointer to a string
    char string3[SIZE]; //create array string3
    char string4[] = "Good Bye"; //create pointer to a string

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
} //end main

//copy s2 to s1 using array notation.
void copy1(char * const s1, const char * s2)
{
    size_t i; //counter

    //loop through strings
    for ( i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {
        ; //do nothing in body
    } //end ofr
} //end function copy1
    //copy s2 to s1 using pointer notation.
    void copy2(char *s1, const char *s2)
    {
    //loop though strings
    for( ; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {
        ; //do nothing in body
    }//end for
}//end function copy2
