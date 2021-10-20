// array_pointer1.c (by Ming-Lun Lee)
// Accessing array elements with pointer arithmetic
#include <stdio.h>

int main(void)
{
    int arr[5] = {15, -20, 30, 48,-105};
    // How to define a point called aPtr and use it to save 
    // the address of arr[5]?
    int i, j;
    for (i = 0; i < 5; i++)
        printf("arr[%d] == %d\n", i, arr[i]);
/*
     other alternatives?
 */
    return 0;
}
