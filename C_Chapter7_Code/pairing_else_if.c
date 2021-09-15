// pairing_else_if.c: Pairing else with if
#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // 6 < number < 12: print "You're close!" 
    // num <= 6: print ""Sorry, you lose a turn!"
    // Can you get the correct result from the the code below?
    if (number > 6)  
       if (number < 12)
            printf("You're close!\n");
    else 
            printf("Sorry, you lose a turn!\n");

    printf("Done!\n");
    return 0;
}

