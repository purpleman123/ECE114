// Listing 6.3 (p.195)
#include <stdio.h>

int main() {
    int n = 0;
    // Q: How to fix it?
    while (n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all this program does.\n");
    return 0;
}
