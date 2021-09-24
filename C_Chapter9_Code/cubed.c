#include <stdio.h>

int cube(int a);

main(int argc, char const *argv[]){

    int x;
    for(x=1; x <= 15; x++){
        printf("%d ", cube(x));
    }
    return 0;
}

int cube(int a){
    int b = a*a*a;
    return b;
}