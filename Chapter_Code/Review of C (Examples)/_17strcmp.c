// Listing 11 strcmp.c
// Compares two strings
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[15] = {'\0'};  // Initialize each element to a null character.
    char str2[15] = {'\0'};
    // Please correct the errors:.
    str1 = "Snoopy";
    str2 = "Garfield";

    int ret = strcmp(str1, str2);
    if(ret < 0)
        printf("\"%s\" is less than \"%s\"\n", str1, str2);
    else if(ret > 0)
        printf("\"%s\" is greater than \"%s\"\n", str1, str2);
    else
        printf("\"%s\" is equal to \"%s\"\n", str1, str2);
    return 0;
}
