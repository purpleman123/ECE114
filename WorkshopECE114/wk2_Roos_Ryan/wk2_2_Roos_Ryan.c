#include <stdio.h>

int main()
{
int quarters, dimes, nickels, pennys, dollars, cents;
float x, y, z, a;
    printf("Enter the number of quarters: ");
        scanf("%d", &quarters);
    printf("Enter the number of dimes: ");
        scanf("%d", &dimes);
    printf("Enter the number of nickels: ");
        scanf("%d", &nickels);
    printf("Enter the number of pennys: ");
        scanf("%d", &pennys);
    x=quarters*0.25;
    y=dimes*0.1;
    z=nickels*0.05;
    a=pennys*0.01;
    dollars=x+y+z+a;
    cents=100*((x+y+z+a)-dollars);
printf("The total amount is %d dollars(s) and %d cent(s).", dollars, cents);
return 0;
}