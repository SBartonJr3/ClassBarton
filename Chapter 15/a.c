//p = (type *)malloc(size)

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int *age;

    age = (int *)malloc(sizeof(int)*1);

    if(age == NULL)
    {
        puts("unable to allocate memory");
        exit(1);
    }
    printf("How old are you now?\n");
    scanf("%d", age);

    printf("You are %d years old!\n", *age);
    return 0;
}