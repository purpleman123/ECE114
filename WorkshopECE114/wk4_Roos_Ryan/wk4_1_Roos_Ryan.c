//workshop4_1_template.c: GCD and LMC
/*
 Description: Greatest Common Divisor (GCD) and Least Common Multiple (LCM) calculator
 Write a C program to calculate the GCD and the LCM of 2 given numbers. A GCD, the greatest common divisor of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers (Wikipedia). The LCM is the least common multiple of 2 numbers is the smallest number that they both divide evenly into (Wikipedia).

 Ask the user to enter 2 integers (positive or negative), calculate and print the GCD for them. Then, using the calculated GCD, calculate the LCM, using the following formula: LCM = (number1*number2)/GCD. Assume the user enters non-zero integers.

 Sample Output:

 *** GCD AND LMC FINDER FOR TWO INTEGERS (POSITIVE OR NEGATIVE) ***
 Enter the first number: 40
 Enter the second number: 50
 The GCD of the two numbers is 10.
 The LCM of the two numbers is 200.

 or

 *** GCD AND LMC FINDER FOR TWO INTEGERS (POSITIVE OR NEGATIVE) ***
 Enter the first number: -50
 Enter the second number: 77
 The GCD of the two numbers is 1.
 The LCM of the two numbers is 3850.

 
 */
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, gcd, lcm, r1, r2; // 2 inputs & their GCD and LCM
    // small
 
    puts("*** GCD AND LMC FINDER FOR TWO INTEGERS (POSITIVE OR NEGATIVE) ***");
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    num1 = abs(num1);
    num2 = abs(num2);

    for (int i = 1; i <= num1 ; i++) // for some reason it doesnt matter which num you go to cause it will only resave value if it works out
    {
      r1 = num1 % i;
      r2 = num2 % i;
      if (r1==0 && r2==0)
      {
        gcd=i;
      }
    }

    printf("The GCD of the two numbers is %d.\n", gcd);
    lcm = (num1 * num2) / gcd; // formula
    printf("The LCM of the two numbers is %d.\n", lcm);


    return 0;
}
