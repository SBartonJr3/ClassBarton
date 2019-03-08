#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


/*  Perf Lab 5A
*   Author: Stephen Barton Jr
*   Date: 05 FEB 2019
*   Project: Perf Lab 5A
*/

int main(void)

{
    double Leg1 = 0;
    double Leg2 = 0;
    double ThirdLeg = 0;

    printf("Type the length of Leg1 and Leg2 seperated by a Tab:  \n");
    scanf("%lf\t%lf", &Leg1, &Leg2);  //inputs and stores two legs of triangle

    if ((Leg1 > 0) && (Leg2 > 0)) //as long as the inputs are greater than 0, pythag theorem happens
    {
    ThirdLeg = sqrt((Leg1 * Leg1) + (Leg2 * Leg2));
    printf("The hypotenuse is %.2f. \n", ThirdLeg);
    }
    else //if not, prints statement that youre stupid
    {
    printf("Thats not gonna work fam, try again with positive numbers.\n");
    }
    return 0;
}
