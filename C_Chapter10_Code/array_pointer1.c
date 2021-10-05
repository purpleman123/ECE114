// array_pointer1.c (by Ming-Lun Lee)
// Accessing array elements with pointer arithmetic
#include <stdio.h>

int main(void)
{
    int arr[5] = {15, -20, 30, 48,-105};
    int * aPtr = arr;
    int i, j;
    for (i = 0; i < 5; i++)
        printf("arr[%d] == %d\n", i, arr[i]);
    // 4 alternative ways using pointer arithmatic or array notation:
    do{
        int i = 0;
        printf("arr[%d] == %d\n", i, arr[i]);
        i++;
    } while (i<5);
    
    return 0;
}
