#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//int x, y, z;
int x;
int y;
int z;

//prompt for three values
printf("Enter three numbers, each seperated by a tab.\n");
//store values with scan f
scanf("%d\t%d\t%d", &x, &y, &z);
//if x is positive output average of 3
if (x >= 0)
{
    printf("(%d + %d + %d)/3 = %d\n", x, y, z, ((x+y+z)/3));
}
else
{
    //else print Bad data
    printf("Bad Data.\n");
}

return 0;
}



