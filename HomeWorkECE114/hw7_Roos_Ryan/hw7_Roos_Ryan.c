#include <stdio.h>
#include <stdlib.h>

typedef struct STUDENT{
    int IDnum;
    char first[50];
    char last[50];
}STUDENT;

int main(int argc, char * argv[]){
    FILE * fp;
    int studentnum;
    char line[100];

    if(argc == 1 || argc > 2)
    {
        printf("Random Order Generator!\n");
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }  
    else{
        //malloc and free to generate array of STUDENT structs
        fp = fopen(argv[1], "r");
        while (fgets(line, sizeof(line), fp) != NULL)
        {
            studentnum++;
        }
        struct STUDENT roster[studentnum];
        //FUNCTION shuffle
        //output in table format
        printf("    Full Name       ID\n");
        for (int i = 0; i < studentnum; i++)
        {
            printf("%s %s                %d\n", roster[studentnum].first, roster[studentnum].last, roster[studentnum].IDnum);
        }

    }

    return 0;
}
