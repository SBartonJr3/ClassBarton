#include <stdio.h>

/*
Stephen Barton
PerfLab10.7A
20 FEB 2019
*/
#undef EOF
#define EOF (66) //Redefine EOF as 66
#define _INC_STDIO (1337)

int main()
{
#ifdef _INC_STDIO
    printf("The value of _INC_STDIO is: %d\n", _INC_STDIO);

#else
    printf("_INC_STDIO is not defined\n");

#endif

//EOF being properly defined
#if EOF == 66
    printf("One more 6 and EOF is the devil.\n");
#else 
    printf("That EOF is a no for me.\n")
#endif

//FOPEN_MAX defined
#undef FOPEN_MAX
#define FOPEN_MAX (23)
#if FOPEN_MAX > 23
    printf("FOPEN_MAX is too big!");
#else
    printf("That FOPEN_MAX works for me\n");
#endif

//FILENAME_MAX defined
#undef FILENAME_MAX
#define FILENAME_MAX (42)
#if FILENAME_MAX == 42
    printf("There's just something about that number.\n");
#elif FILENAME_MAX > 42
    printf("FILENAME_MAX is too big fam.\n");
#else
    printf("Thats works just fine for FILENAME_MAX.\n");
#endif



return 0;

}

