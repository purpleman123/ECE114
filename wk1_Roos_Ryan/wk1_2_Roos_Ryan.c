#include <stdio.h>
// need one var for the pie input
// then one long output with all different items
// need 2 decimal float for pie per person and butter
int main(){
    int p;
        printf("How many pies will you make? ");
        scanf("%d", &p); // only need to worry about integers since we cant make parts of pie
        printf("\nEach person will get %.2lf pies.\n\nYou will need:\n%d tablespoons of flour.\n%d cups of sugar.\n%.2lf cups of butter", p/5.,p*3,p*1,p*0.5);
    // long line above includes all of final output with proper spacing
    return 0;
}