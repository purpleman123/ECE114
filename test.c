//Ryan Roos ECE 114 
//HW4 Question 2 9/30/21
#include <stdio.h>
int main(){

int input = 4;
int output = 1;

    for (int i = 0; i <= input; i++)
    {
    output=(input-i)*output;
    }

printf("%d", output);
return 0;
}