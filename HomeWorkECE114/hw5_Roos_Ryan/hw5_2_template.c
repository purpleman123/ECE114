/**
 * @file    hw3_1_<lastName>_<firstName>.c  // Change the file name!
 * @brief   
 * @author  
 */

#include <stdio.h>
#define ROWS        3
#define COLUMNS     3
#define NUM_BOXES   9  // ROWS * COLUMNS

/*
    @fn     printBoard()
    @brief  Print tic tac toe board given the matrix.
    @note   To use this, simple write 'printBoard(matrix);'
            when you want to print the board on the console.
*/
void printBoard(int matrix[ROWS][COLUMNS]);

/*
    @fn     checkWinner()
    @brief  Check if a player has won the game or not.
    @param  The board matrix
    @return 1 if the player wins, else 0
*/
int checkWinner(int matrix[ROWS][COLUMNS]);

int main(void) {
    // var declarations
    int matrix[ROWS][COLUMNS] = {0};
    int numBoxFilled = 0;               // 0 ~ 9; 0 (empty); 9 (full)
    int row, column;                    // for row # and colunn #
    int player = 1;                     // 1 for player #1 and 2 for player #2
    
    // write your code here

    return 0;
}

// return 0 => no winner
// return 1 => get a winner
int checkWinner(int matrix[ROWS][COLUMNS]) {
    // implement this function
}

/* no need to change this function */
// print board in a format
void printBoard(int matrix[ROWS][COLUMNS]) {
    printf("-------------------\n");
    for (int i = 0; i < ROWS; i++) {
        printf("|");
        for (int j = 0; j < COLUMNS; j++) {
            // print 'X', 'O', or blank depending on what
            // is stored in the matrix
            if (matrix[i][j] == 1)
                printf("  %c  ", 'X');
            else if (matrix[i][j] == 2)
                printf("  %c  ", 'O');
            else
                printf("     ");

            printf("|");
        }
        printf("\n-------------------\n");
    }
    putchar('\n');
}
