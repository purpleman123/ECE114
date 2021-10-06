// atoi: atoi.c (modified by Ming-Lun Lee)
// converts the string argument str to an integer
#include <stdio.h>
#include <stdlib.h> // for atoi()
#include <string.h> // for strcpy()

int main()
{
    int val;
    char str[20] = {'\0'};

    strcpy(str, "987654321");
    val = atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    strcpy(str, "98765432123456789");
    val = atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);
    strcpy(str, "tutorialspoint.com");

    val = atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    return(0);
}





