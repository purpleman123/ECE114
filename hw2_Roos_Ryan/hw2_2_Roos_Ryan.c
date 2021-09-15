//Ryan Roos ECE 114 
//HW2 Question 2 9/16/21
#include <stdio.h>

int main()
{
char last[20], first[20], from[4], to[4]; // This is the creation of character arrays to store the name and airport codes that are imported
float distance, price; // 2 variables for the distance and then one for the final price output. I kept both as float to minimize the chances of errors if someone inputs a distance with a decimal
    printf("Enter the passenger's last name: "); // The following lines 7-16 are where the user can input and store variables to the arrays and float created above
    scanf("%s", &last);
    printf("Enter the passenger's first name: ");
    scanf("%s", &first);
    printf("From: ");
    scanf("%s", &from);
    printf("To: ");
    scanf("%s", &to);
    printf("Distance: ");
    scanf("%f", &distance);
    price=((distance*0.18)+150)*1.08; // This is the equation that takes the distance as an input and will save the final output to the price variable
    printf("LAST NAME     FIRST NAME     FROM   TO     PRICE\n%-14s%-15s%-7s%3s    %0.2f", last, first, from, to, price); // Final print for table output. Strings formatted with left alignment as shown in demo.
return 0;
}