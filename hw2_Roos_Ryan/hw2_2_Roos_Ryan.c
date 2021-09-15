#include <stdio.h>

int main()
{
char last[20], first[20], from[4], to[4];
float distance, price;
    printf("Enter the passenger's last name: ");
        scanf("%s", &last);
    printf("Enter the passenger's first name: ");
        scanf("%s", &first);
    printf("From: ");
        scanf("%s", &from);
    printf("To: ");
        scanf("%s", &to);
    printf("Distance: ");
        scanf("%f", &distance);
    price=((distance*0.18)+150)*1.08;
printf("LAST NAME     FIRST NAME     FROM   TO     PRICE\n%-14s%-15s%-7s%3s    %0.2f", last, first, from, to, price);
return 0;
}