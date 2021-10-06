// pre_post_increment.c
// Preincrementing and postincrementing
#include <stdio.h>

int main(void)
{
    int x;
    // preincrement
    x = 7;
    printf("Preincrement: %d %d %d\n", x, ++x, x);

    // postincrement
    x = 7;
    ++x;
    printf("Postincrement: %d %d %d\n", x, x, x);

    return 0;
}


