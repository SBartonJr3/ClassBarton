#include <stdio.h>
#include <math.h>

/*  LogOpsQuiz
*   Author: Stephen Barton Jr
*   Date: 05 FEB 2019
*   Project: LogOpsQuiz
*/

int main(void)
{
    int x = 99;
    int y = 0;

    printf("1. %d && %d: %d", x, y, x && y); //x && y 
    printf("\n");
    printf("2. %d || %d: %d", y, x, y || x); //y || x
    printf("\n");
    printf("3. !%d: %d", y, !y); //!y
    printf("\n");
    printf("4. %d && %d: %d", y, 0, y && 0); //y && 0 
    printf("\n");
    printf("5. %d || %d: %d", x, 42, x || 42); //x || 42
    printf("\n");
    printf("6. !%d: %d", x, !x); //!x
    printf("\n");
    printf("7. %d && %d: %d", x, x, x && x ); //x && x
    printf("\n");
    printf("8. %d || %d: %d", y, y, y || y); //y || y
    printf("\n");
    printf("9. !%d: %d", 1, !1); //!1
    printf("\n");
    printf("10. %d && %d: %d", 1, 1, 1 && 1); //1 && 1
    printf("\n");
    printf("Bonus. (%d && %d) || (%d && %d): %d", 0, 1, 2, 3, (0 && 1) || (2 && 3)); //(0&&1) || (2&&3)
    printf("\n");

    return 0;

}