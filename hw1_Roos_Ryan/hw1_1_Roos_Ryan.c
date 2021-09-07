// Ryan Roos Assignment
// ECE 114 9/9/21
#include <stdio.h>

int main(){
    // first need to display welcome message along with scan to enter number of phones that can 
    // be produced in one hour ie: #ofphonesperhour*totalyearworkinghours=output
    // then display total phones 

    // 52 weekends * 2 = 104 total days missed, 365-104=261 total days running, 261*24= 6264 total worked hours!
    int x;
        printf("Welcome to the toy phone production calculator! \nEnter the number of phones produced in 1 hour: ");
        scanf("%d",&x); // only need %d due to phones always being integers
        printf("Based on that value, %d phones will be produced in a year. \n", x*6264 ); 
    return 0;
}