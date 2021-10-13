//escape.c: test escape sequences
#include <stdio.h>

int main() {
    printf("I am\a glad\b that I have a goo\fd\n start a\rt ECE114 this sem\t\tes\vte\\r\'.\"\?\n");
    // '\a' may do nothing on your computer
    return 0;
}
