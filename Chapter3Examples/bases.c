/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
    int x = 65;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    // 65/8 = 8 remainder 1;   8/ 8 = 1 remainder 0     0101
    // 65/16 = 4 remainder 1;    0x41
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}
