// input validation practice.
#include <stdio.h>
#define SIZE 10 // int array size (max number of integers)

void bubbleSort(int * array, int n);

int main()
{
    int array[SIZE];   // this is an array of constant size
    int n; //number of elements
    /*
    sample run:
    Enter number of elements (<= 10): 0
    Wrong input! Enter again: 11
    Wrong input! Enter again: 5
    Enter 5 integers:
    3 6 2 1 4
    Print the numbers:
    3 6 2 1 4 
*/
    printf("Enter number of elements (<= 10): ");
 
    printf("Enter %d integers:\n", n);
    // Input validation is not needed here.
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);   // get integer by integer.
    }
    
    printf("Print the numbers:\n");
    for (int i = 0 ; i < n ; i++ )
        printf("%d ", array[i]);
    putchar('\n'); // newline
    return 0;
}
