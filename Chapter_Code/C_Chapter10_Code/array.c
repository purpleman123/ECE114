// array.c: accessing array elements
#include <stdio.h>

int main(void)
{
   // How to initialize elements of array to 0? 
   int n[10];  // n is an array of 10 integers

   // initialize elements of array from index 0
   for (int i = 0; i < 10; i++){
      n[i] = i + 50;     // comment out this line!
      printf("Element[%d] = %d\n", i, n[i]);   // updated
   }

   return 0;
}
