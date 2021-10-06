// Listing 10.1 The day_mon1.c Program
// (from C Primer Plus, 6th ed., p.385)
// Printing the days for each month
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};  // try days[]
    int index;
    
    // How about leap years?
    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %d days.\n",    ,    ); // Complete this line.

    return 0;
}

