// workshop4_2_template.c: Reversing the digits of a positive integer
/*
 Write a C program that accepts a positive five-digit integer input, reverses the digits, and displays it to the user. Your program must have an input validation that checks if the entered value is a five-digit integer between 10000 and 99999 (09999 is not valid!). If the input is wrong, your program needs to ask the user to enter again. You have to write a function, called reverse, that can get each digit and print out the reversed number. The reversed number also needs to have five digits. Think about how to do it! Don’t forget to clear the input buffer! There are several solutions. You may need to use modulo operators and integer division. Write pseudo code first and convert it to a C program.

 The reverse function prototype is:
 void reverse(int inputNum);

 Your program should be able to output as follows:

 Sample output #1:
 Please enter a 5-digit positive integer: 13579
 The reverse of 13579 is 97531!

 Sample output #2:
 Please enter a 5-digit positive integer: OneTwoThreeFour
 Wrong input! Enter a 5-digit positive integer: 1234
 Wrong input! Enter a 5-digit positive integer: 10000
 The reverse of 10000 is 00001!

 Sample output #3:
 Please enter a 5-digit positive integer: 100000
 Wrong input! Enter a 5-digit positive integer: 9999
 Wrong input! Enter a 5-digit positive integer: 98765
 The reverse of 98765 is 56789!
 */
#include <stdio.h>
// function prototype here

int main(void) {
	int input;  // input number
	printf("Please enter a 5-digit positive integer: ");

    /*
      Write your pseudocode here
      Your program must have an input validation that checks if the entered value is a five-digit integer between 10000 and 99999 (09999 is not valid!).
     */

	// call the reverse function

  reverse(input);  
	return 0;
}

// Write the function definition here.
// Write pseudocode first
digit1 = input % 10
digit2 =  
digit3 =
digit4 =
digit5 =