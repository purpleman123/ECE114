// fgets_no_newline.c (version 2) by Ming-Lun Lee
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void)
{
    char arr[SIZE];
    fgets(arr, SIZE, stdin);
    puts(arr);
    printf("The length of the string is %lu.\n", strlen(arr));
    int ln = strlen(arr) - 1; // or size_t for unsigned int
    if(arr[ln] == '\n') // check the last character
        arr[ln] = '\0'; // replace '\n' with '\0'
    puts(arr);   // print twice with puts
    printf("The length of the string is %lu.\n", strlen(arr));
    puts("Done!");
    return 0;
}



