// Listing 7.10: break.c
// Calculate the area of a rectangle
// Using break to exit a loop
#include <stdio.h>

int main(void)
{
    float length, width;
    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) && length>0)    // valid input
    {
        printf("Length = %.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) == 0 || width < 0)    // not valid input
                break;
        printf("Width = %.2f:\n", width);
        printf("Area = %.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");
    return 0;
}

