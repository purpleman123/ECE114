// wk6_1.c: Workshop #6, Q1 Template
/*
Description: Sentence Statistics – Converting to Uppercase
Write a C program to help user count how many uppercase letters, 
lowercase letters and non-alphabetic characters in a line of string
 and then convert the lowercase letters to uppercase letters. Your 
 program needs to use fgets() to get a line of character strings. 
 Don’t forget that the string taken by fgets() may comes with a 
 newline character. You will need to delete replace the newline 
 character with a null character (You may use islower(), isupper(), 
 toupper(), or other char functions from <ctype.h>. 
*/
#include <stdio.h>
#include <string.h> // strlen
#include <ctype.h>  // for to upper
#define SIZE 200    // char array size

int main(void) {
    char text[SIZE] = {0}; // define a char array to save a line of string.
    int countL = 0;  //count lowercase
    int countU = 0;  //count uppercase
    int countS = 0;  //count non-alphabitic characters
    printf("Enter a line of text:\n");
    // use fgets to get a line of string
    fgets(text, SIZE, stdin);
    int ln = strlen(text) - 1;
    if (text[ln] == '\n'){
        text[ln] = '\0';
    }
    // replace the newline before the last '\0' with a '\0'
    printf("Your entered text:\n%s\n", text);
    for(int i = 0; i<SIZE; i++){
        if( (text[i] >= 'A') && (text[i] <= 'Z') ){
            countU++;
        }
    }
    printf("Uppercase letters: %d\n", countU);
    for(int i = 0; i<SIZE; i++){
        if( (text[i] >= 'a') && (text[i] <= 'z') ){
            countL++;
        }
    }
    printf("Lowercase letters: %d\n", countL);
    for(int i = 0; i<SIZE; i++){
        if(text[i] == 0){
            break;
        }
        if( (text[i] >= 'A') && (text[i] <= 'Z') || (text[i] >= 'a') && (text[i] <= 'z') ){
            continue;
        }
        else{
            countS++;
        }
    }
    printf("Non-alphabetic characters: %d\n", countS);

    for(int i = 0; i<SIZE; i++){
        if(text[i] == 0){
            break;
        }
        if((text[i] >= 'a') && (text[i] <= 'z')){
            text[i] = text[i] + 32;
        }
    }
    printf("")
    /* 
    Sample run #1:
    Enter a line of text: 
    Quiz #2 on Friday, 10/15!!!
    Your entered text:
    Quiz #2 on Friday, 10/15!!!
    Uppercase letters: 2
    Lowercase letters: 10
    Non-alphabetic characters: 15

    The text in uppercase is:
    QUIZ #2 ON FRIDAY, 10/15!!!
    */
    
    return 0;
}
