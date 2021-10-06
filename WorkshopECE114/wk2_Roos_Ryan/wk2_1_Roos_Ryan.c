#include <stdio.h>

int main()
{
char lname[20], fname[20];
double x, inches;
int feet;

    printf("Enter your last name: ");
        scanf("%s", lname);
    printf("Enter your first name: ");
        scanf("%s", fname);
    printf("Enter your height in centimeters: ");
        scanf("%lf", &x);
    feet=x/30.48;
    inches=12*(x/30.48)-(feet*12);
    printf("%s %s, you are %d feet and %.4lf inches tall.", fname, lname, feet, inches); 

return 0;
}