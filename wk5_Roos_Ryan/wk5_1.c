// wk5_1.c:  Template for Workshop#5, Q1
// Combinations and Permutations Calculator 
#include <stdio.h>
                 // function prototype here

int main(void) {
	int n, r;    // two positive integers
	int status;  // to check if it is a valid input (save the return value of scanf)
	long combination;  // for combination
	long permutation;  // for permutation

	printf("Enter a positive integer n: ");
    while((status = scanf("%d", &n)) != 1 || n <= 0){
           if(status == 0) {  // invalid input. e.g. #, 5.2
               printf("Invalid input. Enter again: ");
               while(getchar() != '\n'){}  // clear the input buffer
           }
           else
               printf("n has to be a positive integer. Enter again: ");
    }
    while(getchar() != '\n'){}  // clear the input buffer
    printf("Enter a positive integer r (n >= r): ");
    if ()
	printf("C(%d, %d) = %ld\n", n, r, combination);  // will be converted to int automatically
	printf("P(%d, %d) = %ld\n", n, r, permutation);   // display permutation
	return 0;
}

// function definition here
// Use a for loop, instead of a recursion, in the function definition.
int factorial(int input){
    int output = 1;
    for(int i = 0; i <= input; i++){
    output = (input-i)*output;
    }
return output;
}


/*
Three sample runs are as follows:
Sample run #1:
Enter a positive integer n: 5
Enter a positive integer r (n >= r): 2
C(5,2) = 10
P(5,2) = 20
 
Sample run #2:
Enter a positive integer n: 0
n has to be a positive integer. Enter again: 7
Enter a positive integer r (n >= r): 0
r has to be a positive integer. Enter again: 11
r has to be smaller than or equal to n. Enter again: 7
C(7,7) = 1
P(7,7) = 5040

Sample run #3:
Enter a positive integer n: Nine
Invalid input. Enter again: 9
Enter a positive integer r (n >= r):?
Invalid input. Enter again: 23
r has to be smaller than or equal to n. Enter again: 3
C(9,3) = 84
P(9,3) = 504




*/
