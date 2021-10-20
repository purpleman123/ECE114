// switch_grade.c: multiple choice  by Ming-Lun Lee
#include <stdio.h>
// ANY ERRORS?
int main(void)
{
    printf("Enter a letter grade: ");
    switch (getchar())
    {
        case 'A', case 'a':
            printf("Excellent.\n");
        case 'B', case 'b':
            printf("Good.\n");
        case 'C', case 'c', case 'D', case 'd':
            printf("Satisfactory.\n");
        default :        // else
            printf("Failure.\n");
    }
    return 0;
}
