// boolean.c: Boolean data type
#include <stdio.h>
#include <stdbool.h>     // has to include this

int main() 
{ 
    _Bool a = true;   // use _Bool or bool
    bool b = false;
    if(a)
      printf("It\'s true.\n");
    if(!b)  // Not false is true
      printf("It\'s false.\n");
    return 0; 
} 
