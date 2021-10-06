// cast.c: Demonstrate the cast operator
#include <stdio.h>
// type casting

int main()
{
    int cats;
    cats = 1.8 + 1.6;   // 3.5   
    printf ("The number of cats is %d.\n", cats);  // .5 is truncated
    cats = (int) 1.8 + (int) 1.6;    // 1 + 1
    printf ("The number of cats is %d.\n", cats);

    return 0;
}

