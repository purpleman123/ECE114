#include <stdio.h>
#include <math.h>
// pi approximation program
int main()
{
    double n, f, r, i;
    n=0;
    f=0;
    i=0;
    printf("How many iterations would you like to find of PI? ");
    scanf("%0.20lf", i);

    while(n<i+1)
    {
    
        f=((pow(-1, n))/((2*n)+1))+f;    
        ++n; 
    }
 r=4*f;   
printf("%0.20lf", r);
return 0;
}