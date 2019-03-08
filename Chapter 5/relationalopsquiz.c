#include <stdio.h>
#include <math.h>

/*  RelationOpsQuiz
*   Author: Stephen Barton Jr
*   Date: 05 FEB 2019
*   Project: RelationOpsQuiz
*/

int main(void)

{
int x = 2;
int y = 6;

printf("1. %d is less than %d: %d", y, x, y<x);
printf("\n");
printf("2. %d is less than or equal to %d: %d", y, x, y<=x);
printf("\n");
printf("3. %d is greater thatn %d: %d", y, x, y>x);
printf("\n");
printf("4. %d is greater than or equal to %d: %d", y, x, y>=x);
printf("\n");
printf("5. %d is equivalent to %d: %d", y, x, y==x);
printf("\n");
printf("6. %d is not equal to %d: %d", y, x, y!=x);
printf("\n");
printf("7. %d is equivalent to %d: %d", 2, y, 2==y);
printf("\n");
printf("8. %d is not equal to %d: %d", 6, x, 6!=x);
printf("\n");
printf("9. %d is greater than or equal to %d: %d", 6, 2, 6>=2);
printf("\n");
printf("10. %d is less than %d: %d", 2, 6, 2<6);
printf("\n");
printf("11. %d != %d != %d >= %d: %d", x, y, 3, x, ((x!=y)!=3)>=x);
printf("\n");

return 0;

}