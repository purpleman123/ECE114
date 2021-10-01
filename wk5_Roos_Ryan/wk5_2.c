// wk5_2.c: Template for Workshop#5, Q2
// 2D Array
#include <stdio.h>
#include <stdlib.h>  // for srand() and rand()
#include <time.h>    // for time()
#define SIZE 5       // Row and Column

int main(void) {
    srand((unsigned)time(NULL)); // get a random seed
    char matrix[SIZE][SIZE];

    /* 
     complete your code here:


    */

    
    return 0;
}

/*
Generate a 5x5 random matrix of lowercase letters (ASCII codes 97-122). 
If the lowercase is a 'c', 'a', or 't', it must be capitalized on printing
out. If you can spell "CAT" with the matrix (contains 'C', 'A', and 'T'), 
print out the congratulations message. Else, print the sorry message. 
Two sample outputs are as follows:

Sample run #1:

A C i n m 
q v s C q 
T e e d w 
b j h d y 
s v e u w 
Congratulations! You have a "CAT" in your program! *happy meow*

Sample run #2:

v m u o d 
l j i x p 
g u T v z 
o C C m m 
q d x h T 
Sorry, no "CAT" in your program. *sad meow*
*/
