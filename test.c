#include <stdio.h>

int main (void) {
    char *a[1] = { (char[]){"Test my skills"} };
    printf("%s\n", a[0]);            /* output 's' */
    a[0][2] = a[0][2] - 3;                      /* no Segfault here */
    printf("%s\n", a[0]);            /* output 'e' */
    return 0;
}