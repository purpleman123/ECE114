// 2darray.c: accessing 2-dimensional array elements
#include <stdio.h>

int main(void)
{
   // arr is an array with 4 rows and 3 columns
   int arr[4][3] =     ;   // Q: How to write a 2D array
   // try arr[ ][3]
   int i, j;

   // initialize elements of array from index 0
   for (i = 0; i < 4; i++)
       for (j =0; j < 3; j++)
           printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);

   return 0;
}
