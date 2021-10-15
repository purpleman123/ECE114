//Ryan Roos ECE 114 
//HW6 Question 1 10/14/21
#include <stdio.h>
#include <string.h>

//program function: user can select to encode or decode, then inputs sentence, sentence is then encoded or decoded by a given factor, then output this new sentence and return to menu

void encrypt(char * text, int secret);
void decrypt(char * text, int secret);

int main(){
    int exit = 0;
    int inputnum;
    char inputletter;
    char array[100];
    printf("*** ECE114 Encrypter/Decrypter ***\n");
    while(exit != 1){
        printf("Enter e or E for encryption, d or D for decryption, q or Q for quit: "); // this is menu with input val that will move to selected part of program given an input
        scanf("%c", &inputletter);
        fflush(stdin);
        while (inputletter != 'e' && inputletter != 'E' && inputletter != 'd' && inputletter != 'D' && inputletter != 'q' && inputletter != 'Q' ){
            printf("Wrong input! Enter again: ");
            scanf("%c", &inputletter);
            fflush(stdin);
        }
        if( inputletter == 'e' || inputletter == 'E'){
            printf("Enter a text for encryption: \n"); //this is how the string is gathered and the \n at end is removed
            fgets(array, 100, stdin);
            int ln = strlen(array) - 1;
                if (array[ln] == '\n'){
                    array[ln] =  '\0';
                }
            fflush(stdin);
            printf("Enter a secret number (1~25): "); // encode number is gathared and stored
            scanf("%d", &inputnum);
            fflush(stdin);
            while( inputnum < 1 || inputnum > 25){
                printf("Wrong input! Enter again: ");
                scanf("%d", &inputnum);
                fflush(stdin);
            }
            //encrypt function
            encrypt( array, inputnum);
        }
        if( inputletter == 'd' || inputletter == 'D'){ // decrypt has same layout as encrypt just different function
            printf("Enter a text for decryption: \n");
            fgets(array, 100, stdin);
            int ln = strlen(array) - 1;
                if (array[ln] == '\n'){
                    array[ln] =  '\0';
                }
            fflush(stdin);
            printf("Enter a secret number (1~25): ");
            scanf("%d", &inputnum);
            fflush(stdin);
            while(inputnum < 1 || inputnum > 25){
                printf("Wrong input! Enter again: ");
                scanf("%d", &inputnum);
                fflush(stdin);
            }
            //decrypt function
            decrypt( array, inputnum);
        }
        if( inputletter == 'q' || inputletter == 'Q'){
            exit = 1;
        }    
    }
    printf("Thank you for using the ECE 114 Encrypter/Decrypter!");
return 0;
}

void encrypt(char * text, int secret){
    int i = 0;
    while(text[i] != '\0' ){
        for( int k = 0; k < secret; k++ ){                  // this works by taking one letter in the entry and if it is a lower case or uppercase letter
            if( text[i] >= 'a' && text[i] < 'z'){           // it will +1 to it until the encode number is reached. When at z or Z instead of adding 1
                text[i] = text[i] + 1;                      // the value is changed to a or A and the program cont. Once that loop is completed the 
            }                                               // new character is printed and then it moves to next spot in array. Decode is same just -1
            if( text[i] >= 'A' && text[i] < 'Z'){
                text[i] = text[i] + 1;
            }
            if( text[i] == 'z'){
                text[i] = 'a';
                k++;
            }
            if( text[i] == 'Z'){
                text[i] = 'A';
                 k++;
            }
        }
        printf("%c", text[i]);
        i++;
    }
    putchar('\n');
}

void decrypt(char * text, int secret){
    int i = 0;
    while(text[i] != '\0' ){
        for( int k = 0; k < secret; k++ ){
            if( text[i] > 'a' && text[i] <= 'z'){
                text[i] = text[i] - 1;
            }
            if( text[i] > 'A' && text[i] <= 'Z'){
                text[i] = text[i] - 1;
            }
            if( text[i] == 'a'){
                text[i] = 'z';
                k++;
            }
            if( text[i] == 'A'){
                text[i] = 'Z';
                k++;
            }
        }
        printf("%c", text[i]);
        i++;
    }
    putchar('\n');
}
