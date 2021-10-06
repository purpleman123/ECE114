// Listing 7.8: paint.c
// Using the conditional operator
#include <stdio.h>
#define COVERAGE 350  // square feet per paint can

int main(void)
{
    int sq_feet;
    int cans;

    puts("Enter number of square feet to be painted:");   // integer only
    while (scanf("%d", &sq_feet) == 1)
    {
        // calculations here
        // using conditional operator
        printf("You need %d %s of paint.\n", cans,
                );    // Use conditional operator here for singular or plural.
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}

