//Ryan Roos ECE 114 
//HW2 Question 1 9/16/21
#include <stdio.h>
#include <math.h> // Include math header file so that "pow" works as intended

int main()
{
double n, final, sum; // Use the double variable type here to ensure the final output can be 20 decimal places long
n=0; // These lines are here to ensure the variables start with the right values in the while loop
sum=0; 
long iterations=0; // iterations has to be long to function properly in the while loop and is also set to zero for the same reason listed above
    printf("How many iterations would you like to find of PI? "); // Print statment for collecting an iterations input from user
    scanf("%ld", &iterations);

    while(n<iterations+1) // This is the while loop used to sum each iteration of the pi approximation 
    {
        sum=((pow(-1, n))/((2*n)+1))+sum;   //  Leibniz approximation using pow function, adding sum from previous run to output running tally of all iterations
        ++n; // Increases n by 1 after each run
    }
final=4*sum;   // As seen in the assignment the output of the sum needs to be multiplied by 4 to get pi
printf("%0.20Lf", final); // final print output to 20 decimal places
return 0;
}