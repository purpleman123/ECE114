//Ryan Roos ECE 114 
//HW5 Question 2 10/7/21
#include <stdio.h>
#define ROWS        3
#define COLUMNS     3
#define NUM_BOXES   9  // ROWS * COLUMNS

// OVERALL FUNCTION: this program is a game of tic tac toe between two players. Thier inputs are validated for range and to ensure a player has not previously selected the location
// then the grid is printed out between turns to show whats happening in each round. A function will check between rounds if a player has won and if all spaces are filled the program
// will say a tie has happened and end. If a winner is found the player number will be printed and the game will end.

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
    int alreadyMarked = 0;              // store if a inputted array location is already filled
    // write your code here
    printf("Welcome to Tic-Tac-Toe!\n");

    while( (numBoxFilled < NUM_BOXES) && ( checkWinner(matrix) == 0) ){ //loop will keep running until total boxes are filled or winner is found
        printBoard(matrix);
    do{
        printf("Player %d, enter the coordinates you want to put your mark:\n", player);
        printf("row:");
        scanf("%d", &row);
        while(row < 1 || row > 3){ // this loop ensures a proper input is used for the row location
            printf("Wrong input! Enter again: ");
            scanf("%d", &row);
            fflush(stdin);
        }
        printf("column:");
        scanf("%d", &column);
        while(column < 1 || column > 3){ // this loop ensures a proper input is used for the column location
            printf("Wrong input! Enter again: ");
            scanf("%d", &column);
            fflush(stdin);
        }
        if (matrix[row-1][column-1] == 1 || matrix[row-1][column-1] == 2){ // checks if selected location has a 1(X) or 2(O) saved in it already, if so the location picking sequence will begin again 
            printf("This box has been marked! Enter again.\n");
            alreadyMarked = 1;   
        }
        else{
            alreadyMarked = 0; 
        }
    } while (alreadyMarked == 1); // if box was marked this will loop back but if not the program will keep going

        matrix[row-1][column-1] = player; // saves the player number to selected location on array
        numBoxFilled++;
        if( checkWinner(matrix) == 1){ // this is where program will break if last inpt creates a winner
            break;
        }

        if(player == 1){ // if else statment switches between player 1 and 2
            player = 2;
        }
        else{
            player = 1;
        }
        
    }
    printBoard(matrix); // this is here to print the board one last time after game is ended

    if( checkWinner(matrix) == 0){ // if else to select final message of winner or tie
        printf("Game Tied! Game Over.\n");
    }
    else{
        printf("Player #%d wins! Game Over.\n", player);
    }
    return 0;
}

// return 0 => no winner
// return 1 => get a winner
/***********If matrix size is changed this function will have to be changed*************/
int checkWinner(int matrix[ROWS][COLUMNS]) {
    int output = 0;
    int counter = 0;
    while(counter<ROWS){                      // these two while loops 91-107 check all rows and columns for winning combinations
        if (matrix[counter][0] != 0){
            if (matrix[counter][0] == matrix[counter][1] && matrix[counter][1] == matrix[counter][2]){
            output = 1;
            }
        }
    counter++;
    }
    counter = 0;
    while(counter<COLUMNS){
        if (matrix[0][counter] != 0){
            if (matrix[0][counter] == matrix[1][counter] && matrix[1][counter] == matrix[2][counter]){
            output = 1;
            }
        }
    counter++;
    }
    if (matrix[0][0] != 0){               // if statments between 108-117 check both diagonals for winners
        if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]){
        output = 1;
        }
    }
    if (matrix[0][2] != 0){
        if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]){
        output = 1;
        }
    }
return output;
}  


/* no need to change this function */
// print board in a format
/***********If matrix size is changed this function will have to be changed*************/
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