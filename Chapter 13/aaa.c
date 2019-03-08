#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;                                         //int n, i, * ptr, sum = 0;

    printf("enter size of array: ");                             //printf("Enter a number of elements: ");
    scanf("%d", &n1);                                            //scanf("%d", &n);

    ptr = (int*) malloc(n1 * sizeof(int));                       //calloc(n, sizeof(int));   //malloc(n * sizeof(int));
                                                                 //if (ptr == NULL)
    printf("Addresses of previously allocated memory: ");        //{
    for( i = 0; i <n1; ++i)                                      //printf("Error! memory not allocated.");
        printf("%u\n", ptr + i);                                 //exit(0);
                                                                 //}
    printf("\nEnter new size of array: ");                       //printf("Enter Elements: ");
    scanf("%d", &n2);                                            //for(i=0; i < n; ++i)
    ptr = realloc(ptr, n2 * sizeof(int));                        //{
                                                                 //scanf("%d", ptr + i);
    printf("Addresses of newly allocated memory: ");             //sum += *(ptr + i);
    for(i = 0; i < n2; ++i);                                     //}
        printf("%u\n", ptr + i);                                 //printf("Sum = %d\n", sum);
    return 0;                                                    //free(ptr);
                                                                 //return 0;
   
}