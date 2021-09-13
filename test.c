#include <stdio.h>
#include <math.h>

int main()
{
    double f,n,i,r;
    i=10000;
    f=0;
    n=0;
  while(n<i){
    
    f=((pow(-1, n))/((2*n)+1))+f;
    n++;
  }
r=4*f;
printf("%0.20lf", r);
return 0;
}