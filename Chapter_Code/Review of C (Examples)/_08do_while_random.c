// Listing 6.15.2: do_while.c (modified by Ming-Lun Lee)
// Using a random function
#include <stdio.h>
#include        // for srand() and rand() and system()
#include        // for time()

int main(void)
{
    int secret_code;
    int code_entered;
                            // get a random seed
                            // random number between 50 and 100
    // clear the screen
    system("clear"); // on Mac (You don't need to remember this)
    // system("cls"); // on Windows
    do
    {
        printf("To enter the trickaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while(code_entered != secret_code);

    printf("Congratulations! You are cured!\n");
    return 0;
}


