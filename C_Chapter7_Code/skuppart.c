// Listing 7.9: skippart.c
// Using continue to skip part of loop
// get min & max scores
#include <stdio.h>
int main(void)
{
    const float MIN = 0.0f;    // 0 <= score <= 100
    const float MAX = 100.0f;

    float score;        // temp variable for a score input
    float total = 0.0f; // total score
    int n = 0;
    float min = MAX;    // initial value for min score
    float max = MIN;    // initial value for max score

    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score) == 1)
    {
        if (        )       // score is less than MIN or score is great than MAX
        {
            printf("%.1f is an invalid value. Try again: ",
                   score);
                            // complete this statement
        }
        printf("Accepting %.1f\n", score);
        // How to update min and max?
        min =
        max =
        total += score;
        n++;
        printf("Enter next score (q to quit): ");
    }
    if (n > 0)
    {
        printf("Average of %d scores is %.1f.\n", n, total / n);
        printf("Low = %.1f, high = %.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    return 0;
}

