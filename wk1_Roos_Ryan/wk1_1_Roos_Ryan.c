#include <stdio.h>

int main(){
    // print three integer enter spots, then sum, product and average all at once
    int x, y, z;
        printf("*** Enter three different integers ***\nInteger #1: ");
        scanf("%d", &x);
        printf("Integer #2: "); // only worrying about integers as inputs means only %d is needed to record them
        scanf("%d", &y);
        printf("Integer #3: ");
        scanf("%d", &z);
        printf("Sum is %d\nProduct is %d\nAverage is %.3lf", x+y+z, x*y*z, (x+y+z)/3. ); // need %.3lf to keep average to three decimal places
return 0;
}