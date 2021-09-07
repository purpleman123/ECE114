// Ryan Roos Assignment
// ECE 114 9/9/21
#include <stdio.h>

int main()
// need to create 2 float variables to store decimals, then two print functions to allow the input of these two resistor values
// final output to three decimal places using %.3lf using given formulas
{
float x,y;
    printf("Enter resistor value #1: ");
    scanf("%f", &x);
    printf("Enter resistor value #2: ");
    scanf("%f", &y);
    printf("The parallel resistance is %.3lf ohms.\nThe series resistance is %.3lf ohms.", (x*y)/(x+y), x+y);
return 0;
}