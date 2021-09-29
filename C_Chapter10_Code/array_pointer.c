// array_pointer.c
// Accessing array elements with pointer arithmetic
#include <stdio.h>

int main(void)
{
	int arr[3] = {15, -20, 30};
	int * aPtr = arr;
	printf("arr[2] == %d\n", arr[2]);
	printf("*(arr + 2) == %d\n", *(arr + 2));   // a dereferencing operator
	printf("*(aPtr + 2) == %d\n", *(aPtr + 2));
	printf("aPtr[2] == %d\n", aPtr[2]); // array notation

    return 0;
}
