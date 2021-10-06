// Listing 11.2: strptr.c (from C Primer Plus, 6th ed., p. 443)
// strings as pointers
#include <stdio.h>

int main(void)
{
    printf("%s, %p, %c\n", "We", "love", *"music ^_^");

    return 0;
}