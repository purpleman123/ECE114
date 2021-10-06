#include <stdio.h>

int main()
{
int row, column;
    printf("How many rows would you like? ");
    scanf("%d", &row);
    printf("How many columns would you like? ");
    scanf("%d", &column);

    for (int counter1=1; counter1<row+1; ++counter1){
    printf("| ");
        for (int counter2=1; counter2<column+1; ++counter2){
            printf("%-4d", counter1*counter2);
        }
    printf(" |\n");
    }
}