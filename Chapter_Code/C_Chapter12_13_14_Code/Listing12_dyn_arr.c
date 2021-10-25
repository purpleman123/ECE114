// Listing 12.14: dyn_arr.c
// dynamically allocated array
#include <stdio.h>
#include <stdlib.h> // for malloc(), free()

int main(void)
{
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");

    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered -- bye.");
   //     printf("EXIT_FAILURE = %d\n", EXIT_FAILURE);
        // exit(EXIT_FAILURE);   // EXIT_FAILURE == 1
        return 1;
    }
    /*
    while(scanf("%d", &max) == 0)
    {
    	   printf("Number not correctly entered. Enter again: ");
    	   while(getchar() != '\n') {} //clear the input buffer
    }
    while(getchar() != '\n') {} //clear the input buffer
    */
    //** complete dynamic memory allocation here
    ptd = (double * ) malloc(max * sizeof(double));
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    /* ptd now points to an array of max elements */

    puts("Enter the values (q to quit):");
    //** Write value to the dynamic array here.
    
    while(scanf("%lf", ptd + 1) == 1 && i < max){
        i++;
    }

    printf("Here are your %d entries:\n", number = i);
    for(i = 0; i < number; i++)
    {
        printf("%-7.2f ", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if(i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);

    return 0;
}
