// Listing 6.15.1: do_while1.c (modified by Ming-Lun Lee)
// exit condition loop
#include <stdio.h>
#include <stdlib.h>  // for system()

int main(void)
{
    int secret_code;
    int code_entered;
    printf("Enter my secret code between 1 and 20: ");
    scanf("%d", &secret_code);
    // clear the screen
    system("clear"); // on Mac
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

