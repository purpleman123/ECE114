#include <stdio.h>
#include <math.h>
// pi approximation program
int main()
{
    long double f,x,n,z;
    n=0.000000;
    f=0;
    x=1000000;
    z=-1;
while(n < x+1){
    f= f+((z^n)/((2*n)+1));
    ++n;
}
printf("%ld", f);
return 0;
}