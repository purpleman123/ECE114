#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    

    if(argc == 1 || argc > 2){
        printf("Random Order Generator!\n");
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
      
    else{
        //malloc and free to generate array of STUDENT structs
        ptd = (STUDENT * ) malloc(100 * sizeof(STUDENT));

        fp = fopen(argv[1], "r");
        while (fgets(line, sizeof(line), fp) != NULL)
        {
            studentnum++;
        }
        ptd[studentnum];
        //pull info from txt file 
        rewind(fp);
        while( i < studentnum ){
            fscanf(fp, " %d %s %s ", &ptd[i].IDnum, ptd[i].last, ptd[i].first);
            i++;
        }
        //output in table format in random order - loop spaces given the name length
        printf("    Full Name                              ID\n");
        shuffle(ptd, studentnum);

    }
    free(ptd);
    return 0;
}


void shuffle(STUDENT * const ptd, int studentnum){

int randCheck, random, spacing;
int randarray[studentnum];
        for (int k = 0; k < studentnum; k++){
            randarray[k] = 100;
        }
srand((unsigned)time(NULL));

for (int k = 0; k < studentnum; k++){
    do{
        randCheck = 0;
        random = rand() % studentnum;
        for (int i = 0; i < studentnum; i++){
            if (randarray[i] == random){
                randCheck = 1;
            } 
        }
                
        }while(randCheck == 1);
        printf("%s %s", ptd[random].first, ptd[random].last);
        spacing = strlen(ptd[random].first) + strlen(ptd[random].last) + 1;
        for (int i = 0; i < 40 - spacing; i++){
            printf(" ");
        }    
        printf("%06d\n", ptd[random].IDnum);
        randarray[k] = random;
    }
}
