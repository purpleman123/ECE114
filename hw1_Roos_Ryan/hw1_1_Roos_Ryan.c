#include <stdio.h>

int main(){
    // first need to display welcome message along with scan to enter number of phones that can 
    // be produced in one hour ie: #ofphonesperhour*totalyearworkinghours=output
    // then display total phones 
    int x;
        printf("Welcome to the toy phone production calculator! \nEnter the number of phones produced in 1 hour: ");
        scanf("%d",&x);
        printf("Based on that value, %f phones will be produced in a year. \n", x*6240 );
    return 0;
}