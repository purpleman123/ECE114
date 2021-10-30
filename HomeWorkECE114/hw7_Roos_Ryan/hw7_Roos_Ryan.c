#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// This program will take a txt file full of students and IDs and output them in a random order

typedef struct STUDENT{
    int IDnum;
    char first[50];
    char last[50];
}STUDENT;

void shuffle(STUDENT * const ptd, int studentnum); 

int main(int argc, char * argv[]){
    FILE * fp;
    int studentnum;
    int i = 0;
    char line[100];
    STUDENT * ptd; 
    

    if(argc == 1 || argc > 2){                   // if statments for different command line inputs
        printf("Random Order Generator!\n");     // if neither of these are met then program will operate normally
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
      
    else{
        //malloc to generate array of STUDENT structs
        ptd = (STUDENT * ) malloc(100 * sizeof(STUDENT)); // dynamic allocation for STUDENT array

        fp = fopen(argv[1], "r");
        while (fgets(line, sizeof(line), fp) != NULL) // counts how many student structs are needed
        { 
            studentnum++;
        }
        ptd[studentnum];
        //pull info from txt file 
        rewind(fp);
        while( i < studentnum ){
            fscanf(fp, " %d %s %s ", &ptd[i].IDnum, ptd[i].last, ptd[i].first); // each student is pulled and put into the array
            i++;
        }
        //output in table format in random order
        printf("    Full Name                              ID\n");
        shuffle(ptd, studentnum);

    }
    free(ptd);
    return 0;
}


void shuffle(STUDENT * const ptd, int studentnum){
/* this program works by randomly out putting different 
spots in the array not by changing the actual contents of
the array */

int randCheck, random, spacing;
int randarray[studentnum];
        for (int k = 0; k < studentnum; k++){ // array for checking if that student has been picked already
            randarray[k] = 100;
        }
srand((unsigned)time(NULL));

for (int k = 0; k < studentnum; k++){ // this will generate a number out of the given number of students and then check that they havent been used already
    do{
        randCheck = 0;
        random = rand() % studentnum;
        for (int i = 0; i < studentnum; i++){
            if (randarray[i] == random){
                randCheck = 1;
            } 
        }
                
        }while(randCheck == 1);
        printf("%s %s", ptd[random].first, ptd[random].last); // once the random number is checked that players information is printed
        spacing = strlen(ptd[random].first) + strlen(ptd[random].last) + 1;
        for (int i = 0; i < 40 - spacing; i++){ // this is here to make sure the ID numbers line up no matter the name of the player
            printf(" ");
        }    
        printf("%06d\n", ptd[random].IDnum);
        randarray[k] = random;
    }
}
