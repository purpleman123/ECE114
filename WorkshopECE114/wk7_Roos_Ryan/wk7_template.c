// wk7_template.c: ECE114 Workshop #7
#include <stdio.h>
#include <stdlib.h> // for atoi()
#include <string.h> // for strcmp()
#define SIZE 4   // size of an array of BURGER structs
#define LEN 20   // size of a char array

// typedef a new struct data type called BURGER
typedef struct BURGER{
    char type[LEN];
    float price;
    int quanity;
}BURGER;



int main(void) {
    // initialize an array of 4 BURGER structs here
    BURGER burgers[SIZE] = {
        {"Chicken Burger", 3.49, 0},
        {"Pork Burger", 3.99, 0},
        {"Beef Burger", 4.99, 0},
        {"Fish Burger", 4.49, 0}
    };




    char input[LEN]; // an array to save each input
    int choice; // burger choice (1-4)
    int quantity; // number of burgers for each input (positive integer)
    double total = 0; // total (Don't forget to initialize it!!!)
    printf("*** Welcome to ECE114 Cafe ***\n");
    // complete the rest of the program!
    for (int i = 1; i <= SIZE; i++){
        printf("%d. %s $%.2f\n", i, burgers[i-1].type, burgers[i-1].price );
    }
    printf("Which burger do you want to order (q to exit)?");
    while((fgets(input, LEN, stdin)) != NULL && strcmp(input, "q\n")){
        if ( (choice = atoi(input)) < 1 || choice > 4 ){
            printf("Wrong input! Enter a choice between 1 and 4: ");
            continue;
        }
        printf("How many? ");
        fgets(input, LEN, stdin);
        while( (quantity = atoi(input)) <= 0){
            printf("Wrong input! Enter a positive integer: ");
            fgets(input, LEN, stdin);
        }
        burgers[choice-1].quanity += quantity;
    }

    return 0;
}
