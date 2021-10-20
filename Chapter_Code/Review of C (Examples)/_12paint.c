// Listing 7.8: paint.c
// Using the conditional operator
#include <stdio.h>
#define COVERAGE 350  // square feet per paint can

int main(void)
{
    int sq_feet;
    int cans;

    puts("Enter number of square feet to be painted:");   // integer only
    while (scanf("%d", &sq_feet))
    {
        cans = sq_feet / COVERAGE;     // how to explain it?
        cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);   // how to explain it?
        // Complete this line: singular: "can"; plural: "cans"
        printf("You need %d %s of paint.\n", cans,
                        );    // how to explain it ?
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}

