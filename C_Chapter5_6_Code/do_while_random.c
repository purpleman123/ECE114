// Listing 6.15.2: do_while.c (modified by Ming-Lun Lee)
// Using a random function
#include <stdio.h>
#include <stdlib.h>  // for srand() and rand() and system()
#include <time.h>    // for time()

int main(void)
{
    int secret_code;
    int code_entered;
    srand((unsigned)time(NULL));  //seed
    secret_code = rand() % 20 + 1;  // random number between 1 and 20
    // clear the screen
    system("clear"); // on Mac; on Windows (with VSCode)
    // system("cls"); // on Windows (with Command Prompt)
    do
    {
        printf("To enter the trickaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while(code_entered != secret_code);

    printf("Congratulations! You are cured!\n");
    return 0;
}


