// Ryan Roos Assignment
// ECE 114 9/9/21
#include <stdio.h>

int main()
{
float x,y;
    printf("Enter resistor value #1: ");
    scanf("%f", &x);
    printf("Enter resistor value #2: ");
    scanf("%f", &y);
    printf("The parallel resistance is %.3lf ohms.\nThe series resistance is %.3lf ohms.", (x*y)/(x+y), x+y);
return 0;
}