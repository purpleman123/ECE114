// Listing 11.4: arrchar.c
// array of pointers, array of strings
#include <stdio.h>
#include <string.h>
#define SLEN 10
#define LIM 4
int main(void)
{
    const char * SuperMario1[] = {
        "Mario", "Donkey Kong", "Luigi",
        "Peach", "Toad", "Daisy"};
    char SuperMario2[LIM][SLEN] = {
        "Bowser", "Yoshi", "Boo","Waluigi"};
    
    printf("%zd, %zd\n",
           sizeof(SuperMario1), sizeof(SuperMario2));
    
    for(int i = 0; i < 6; i++){
        printf("%s\n", SuperMario1[i]);
    }
    
    for(int i = 0; i < LIM; i++){
        printf("%s\n", SuperMario2[i]);
    }
    // Is it okay to use 
    /*
    SuperMario1[2] = "Professor E. Gadd";
    for(int i = 0; i < 6; i++){
        printf("%s\n", SuperMario1[i]);
    }
    // SuperMario2[1] = "Kammy Kooopa";
    strcpy(SuperMario2[1],"Kammy Koopa"); // zsh: illegal hardware instruction 
    for(int i = 0; i < LIM; i++){
        printf("%s\n", SuperMario2[i]);
    }
    */
    return 0;
}


