// Listing 11.31: repeat.c (modified by Ming-Lun Lee)
// main() with arguments
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc);
    // argc also counts the executable file name
    for (count = 0; count < argc; count ++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    return 0;
}

