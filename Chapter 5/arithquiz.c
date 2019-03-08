#include <stdio.h>
#include <math.h>

/*  Performance ArithQuiz5.2
*   Author: Stephen Barton Jr
*   Date: 05 FEB 2019
*   Project: ArithQuiz5.2
*/

int main(void)

{

int x = 7;
int y = 4;
float z = 0;

//////// WRITE EACH RESULT ////////
printf("1. %d times %d is: %d", x, y, x * y);
printf("\n");
printf("2. %d divided by %d is: %f", x, y, z); 
printf("\n");                           
printf("3. %d Modulus %d is: %d", x, y, x % y);
printf("\n");
printf("4. %d plus %d is: %d", y, x, y + x);
printf("\n");
printf("5. %d minus %d is: %d", y, x, y - x);
printf("\n");
printf("6. %d negative is: %d", y, -y);
printf("\n");
printf("7. %d incremented before evaluation is: %d", x, ++x);
printf("\n");
printf("8. %d incremented after evaulation is: %d", y, y++);
printf("\n");
printf("9. %d decremented after evaluation is: %d", x, x--);
printf("\n");
printf("10. %d decremented before evaluation is: %d", y, --y);
printf("\n");
printf("11. %d plus %d times (%d plus %d) plus %d is: %d", 1, 2, 3, y, 5, 1 + 2 * (3 + y) + 5);
printf("\n");

return 0;
}