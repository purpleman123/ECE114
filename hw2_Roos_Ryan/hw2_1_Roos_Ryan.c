#include <stdio.h>
#include <math.h>
// pi approximation program
int main()
{
    double n, final, sum;
    n=0;
    sum=0;
    long i=0;
    printf("How many iterations would you like to find of PI? ");
    scanf("%ld", &i);

    while(n<i+1)
    {
    
        sum=((pow(-1, n))/((2*n)+1))+sum;    
        ++n; 
    }
 final=4*sum;   
printf("%0.20Lf", final);
return 0;
}