#include <stdio.h>
#include <math.h>

int main()
{
    double f, n;
    n=1;
    f=((pow(-1, n))/((2*n)+1));

    printf("%0.20lf", f);
}