// Listing 11 strcmp.c
// Compares two strings
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[15] = {'\0'};  // Initialize each element to a null character.
    char str2[15] = {'\0'};
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    int ret = strcmp(str1, str2);
    if(ret < 0)
        printf("str1 is less than str2\n");
    else if(ret > 0)
        printf("str2 is less than str1\n");
    else
        printf("str1 is equal to str2\n");
    return 0;
}
