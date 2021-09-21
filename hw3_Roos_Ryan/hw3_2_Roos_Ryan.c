#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int digit1, digit2, digit3, digit4;
    int random1, random2, random3, random4;
    int round=1;
    srand((unsigned)time(NULL));
    random1 = rand() % 5 + 1;
    random2 = rand() % 5 + 1;
    random3 = rand() % 5 + 1;
    random4 = rand() % 5 + 1;
    do {
        printf("\nRound #%d:\n", round);
        printf("Please enter digit #1 (1~5): ");
        scanf("%d", &digit1);
        printf("Please enter digit #2 (1~5): ");
        scanf("%d", &digit2);
        printf("Please enter digit #3 (1~5): ");
        scanf("%d", &digit3);
        printf("Please enter digit #4 (1~5): ");
        scanf("%d", &digit4);
        printf("\nFirst     Second    Third     Fourth\n");
        printf("%-10d%-10d%-10d%d\n", digit1, digit2, digit3, digit4);
        if (digit1==random1)
            printf("T         ");
        else{ 
            if (digit1==random2)
            printf("W         ");
            else{
                if (digit1==random3)
                printf("W         ");
                else{
                    if (digit1==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit2==random2)
            printf("T         ");
        else{ 
            if (digit2==random1)
            printf("W         ");
            else{
                if (digit2==random3)
                printf("W         ");
                else{
                    if (digit2==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit3==random3)
            printf("T         ");
        else{ 
            if (digit3==random2)
            printf("W         ");
            else{
                if (digit3==random1)
                printf("W         ");
                else{
                    if (digit3==random4)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        if (digit4==random4)
            printf("T         ");
        else{ 
            if (digit4==random2)
            printf("W         ");
            else{
                if (digit4==random3)
                printf("W         ");
                else{
                    if (digit4==random1)
                    printf("W         ");
                    else
                    printf("F         ");
                }
            }
        }
        round++;
    }while (digit1!=random1 || digit2!=random2 || digit3!=random3 || digit4!=random4);
   
    printf("Congratulations!\nThank you for playing! Total rounds: %d", round-1);
return 0;
} 