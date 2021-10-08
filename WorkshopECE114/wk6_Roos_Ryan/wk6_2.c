// wk6_2.c: Workshop #6, Q2 Template
// Bubble Sort
/*
Description: Bubble Sort 
Write a C program to sort an array of integers 
in ascending order using the bubble sort algorithm. 
Your program has to get integers from the user and 
fill the array in the main function. You must define 
a custom function to sort the array and show the sorting 
step by step. This function takes the array memory address 
and the number of input integers as two arguments. It does 
not return anything. Your program needs to call the sorting 
function in the main function and print out the sorted number 
in the main function. 
*/
#include <stdio.h>
#define SIZE 100 // int array size (max number of integers)

// Complete the bubbleSort function prototype here

int main()
{
    int array[SIZE];   // this is an array of constant size
    int n; //number of elements
    
    printf("Enter number of elements (<=100): ");
    while(scanf("%d", &n) == 0 || n < 1 || n > 100){
         printf("Wrong input! Enter again: ");
         while(getchar() != '\n'){} // clear the input buffer
    }
    while(getchar() != '\n'){} // clear the input buffer (e.g., 5$$$ or 6.2)
    printf("Enter %d integers:\n", n);
    // Get integer by integer. Input validation is not needed here.
    
    // call the bubbleSort function
    /*
    Sample Run:
    Enter number of elements (<=100): 101
    Wrong input! Enter again: 0
    Wrong input! Enter again: Seven
    Wrong input! Enter again: 7
    Enter 7 integers:
    -9 -6 -5 2 6 7 8                               

    Sorting...
    -9 -6 -5 2 6 7 8 
    -9 -6 -5 2 6 7 8 
    -9 -6 -5 2 6 7 8 
    -9 -6 -5 2 6 7 8 
    -9 -6 -5 2 6 7 8 
    -9 -6 -5 2 6 7 8 
    Sorted list in ascending order:
    -9 -6 -5 2 6 7 8 
    */
    return 0;
}

// Complete the bubbleSort function definition here