// Listing 10.8: pnt_add.c
// pointer addition
#include <stdio.h>
#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti;   // pti is a pointer to a short
    short index;
    double bills[SIZE];
    double * ptf;  // ptf is a pointer to a double
    pti = dates;   // assign address of array to pointer
    ptf = bills;   // assign address of array to pointer
    printf("\n%28s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
    {
        printf("pti + %d, ptf + %d : %10p %10p\n",
               index, index, pti + index, ptf + index);
        printf("&pti[%d], &ptf[%d]: %10p %10p\n",
               index, index, &pti[index], &ptf[index]);
    }
    return 0;
}



