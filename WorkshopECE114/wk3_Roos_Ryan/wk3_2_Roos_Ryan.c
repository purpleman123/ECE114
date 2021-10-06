#include <stdio.h>

int main(){
    int number, output1;
    printf("Please enter a positive integer to test: ");
    scanf("%d", &number);
    if (0==number % 2)
    {
    while (output1!=0)
    {
        printf("%d ", number/2);
    } 
    }
    else
    {
       printf("");
    }
    printf("Done!");
    return 0;
}