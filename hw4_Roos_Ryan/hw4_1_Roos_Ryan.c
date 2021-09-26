#include <stdio.h>

int main(){

    char word1, word2, word3;
    printf("Welcome to the ECE114 Club.\n");
    printf("What is the #1 word for your passphrase? ");
    scanf("%c", &word1);
    fflush(stdin);

    if ( word1 == 'e' || word1 == 'E'){
        printf("Enter the #2 word of your passphrase: ");
        scanf("%c", &word2);
        fflush(stdin);
            if ( word2 == 'c' || word2 == 'C')
            {
                printf("Enter the #3 word of your passphrase: ");
                scanf("%c", &word3);
                fflush(stdin);
                    if ( word3 == 'e' || word3 == 'E')
                    {
                        printf("You made it!\nWelcome to the ECE114 Club!");
                    }
                    else{
                        printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
                    }
            }
            else{
                printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
            }
    }
    else{
        printf("Sorry, your phrase was incorrect.\nYou are not allowed in the ECE114 Club.\n");
    }


return 0;
}