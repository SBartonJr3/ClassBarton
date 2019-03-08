#include <stdio.h>
#include <math.h>

/*  AssignOpsQuiz
*   Author: Stephen Barton Jr
*   Date: 05 FEB 2019
*   Project: AssignOpsQuiz
*/

int main(void)

{
    int x = 9;
    int y = 3;

    printf("1. x *= y: %d", (x *= y));
    printf("\n");
    printf("2. x /= y: %d", (x/= y));
    printf("\n");
    printf("3. x %%= y: %d", (x %= y));
    printf("\n");
    printf("4. x += y: %d", (x += y));
    printf("\n");
    printf("5. x -= y: %d", (x -= y));
    printf("\n");
    printf("6. x *= ++y: %d", (x *= (++y)));
    printf("\n");
    printf("7. x /= y--: %d", (x /= (y--)));
    printf("\n");
    printf("8. x %%= --x: %d", (x %= (--x)));
    printf("\n");
    printf("9. x += --y: %d", (x += (--y)));
    printf("\n");
    printf("10. x -= y++: %d", (x -= (y++)));
    printf("\n");
    //printf("Bonus. (y %%= y) || (x /= x--): %d", ((y %= y) || (x /= x--)));
    //printf("\n");

    return 0;

}