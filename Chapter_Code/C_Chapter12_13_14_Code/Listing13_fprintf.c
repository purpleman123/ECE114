// Listing13_fprintf.c by Ming-Lun Lee
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // for strcmp
#define SIZE 100

int main(void) {
    FILE * fp;
    int n = 1;
    char name[SIZE];
    fp = fopen("names.txt", "w");
    if(fp == NULL){
    	   printf("Can't open the file!\n");
    	   return 1; // or exit(EXIT_FAILURE);
    }
    do{
    	   printf("Please enter a name (q to quit): ");
    	   fgets(name, SIZE, stdin);  // It saves a newline!!
    	   if(strcmp(name, "q\n") == 0)
    		   break;
    	   fprintf(fp, "Name #%d: %s", n, name);
    	   n++;
    }while(1);
    puts("Done");
}
