//scanf2Ints.c: Using specifiers by Ming-Lun Lee
#include <stdio.h>

int main(void)
{
	setbuf(stdout, NULL);
    int m, n;
    printf("Input two integers m, n: ");
    /*
    printf("Input integer #1: ");
    scanf("%d", &m);
    printf("Input integer #2: ");
    scanf("%d", &n);
    */
    scanf("%d, %d", &m, &n); // without a comma between two '%d'
    printf("m, n = %d, %d.\n", m, n);

    return 0;
}
