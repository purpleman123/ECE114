#include <stdio.h>
#include <math.h>
// pi approximation program
int main()
{
    long double n, f, r, i, sum;
    n=0;
    r=0;
    printf("How many iterations would you like to find of PI? ");
    scanf("%0.20lf", i);

    while ( n < i )
    {
        f=((pow(-1, n)) / ((2*n)+1));  
        r=f+r;    
        n++; 
    }
r=f*4;
printf("Final Approximation: %0.20lf", r);
return 0;
}