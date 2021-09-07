// Ryan Roos Assignment
// ECE 114 9/9/21
#include <stdio.h>

int main()
{
double x,y,z,a; //x is fahrenheit, y is celsius, z is speed in meters per second, a is speed in feet per second
   printf("*** Speed of Sound Calculator ***\nEnter a temperature in Fahrenheit: ");
   scanf("%lf", &x);
   y = 5.0/9*(x-32);
   z = 331.4+(0.6)*(y);
   a = z*3.281;
   printf("At temperature %0.2lf F or %0.2lf C,\nthe speed of sound in dry air is %0.3lf ft/s or %0.3lf m/s.", x, y, a, z);
return 0;
}