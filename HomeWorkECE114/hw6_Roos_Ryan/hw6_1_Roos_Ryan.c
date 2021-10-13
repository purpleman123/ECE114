#include <stdio.h>
#include <string.h>

int main(){
    int exit = 0;
    int inputnum;
    char inputletter;
    char array[100];
    printf("*** ECE114 Encrypter/Decrypter ***\n");
    while(exit != 1){
        printf("Enter e or E for encryption, d or D for decryption, q or Q for quit: ");
        scanf("%c", &inputletter);
        fflush(stdin);
        while (inputletter != 'e' && inputletter != 'E' && inputletter != 'd' && inputletter != 'D' && inputletter != 'q' && inputletter != 'Q' ){
            printf("Wrong input! Enter again: ");
            scanf("%c", &inputletter);
            fflush(stdin);
        }
        if( inputletter == 'e' || inputletter == 'E'){
            printf("Enter a text for encryption: \n");
            fgets(array, 100, stdin);
            int ln = strlen(array) - 1;
                if (array[ln] == '\n'){
                    array[ln] =  '\0';
                }
            fflush(stdin);
            printf("Enter a secret number (1~25): ");
            scanf("%d", &inputnum);
            fflush(stdin);
            while( inputnum < 1 || inputnum > 25){
                printf("Wrong input! Enter again: ");
                scanf("%d", &inputnum);
                fflush(stdin);
            }
            //encrypt function
            printf("%s\n", array);
        }
        if( inputletter == 'd' || inputletter == 'D'){
            printf("Enter a text for decryption: \n");
            fgets(array, 100, stdin);
            int ln = strlen(array) - 1;
                if (array[ln] == '\n'){
                    array[ln] =  '\0';
                }
            fflush(stdin);
            printf("Enter a secret number (1~25): ");
            scanf("%d", inputnum);
            fflush(stdin);
            while(inputnum < 1 || inputnum > 25){
                printf("Wrong input! Enter again: ");
                scanf("%d", inputnum);
                fflush(stdin);
            }
            //encrypt function
            printf("%s\n", array);
        }
        if( inputletter == 'q' || inputletter == 'Q'){
            exit = 1;
        }    
    }
    printf("Thank you for using the ECE 114 Encrypter/Decrypter!");
return 0;
}

int encrypt(char array[], int number){
    // if that slot of array is 1<x<25 then + input number to it and resave
}