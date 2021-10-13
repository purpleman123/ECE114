#include <stdio.h>

int main(){
    char array[100];
    array[100] = "the name is ryan";
    printf("%s", array);
    array[1] = (int) array[10] + 1;
    printf("%s", array);
    return 0;
}