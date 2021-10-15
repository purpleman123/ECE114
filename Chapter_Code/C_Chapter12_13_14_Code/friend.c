// Listing 14.3: friends.c (template)
#include <stdio.h>
#define LEN 20

// declare an array of 5 pointers to a string
const char * msgs[] =
{
    "   Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious ",
    " and have a few laughs"
};

// two structs here
// declare 2 structs
struct names // first struct
{
    char first[LEN];
    char last[LEN];
};

struct guy{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    // initialize a struct of guy called fellow
    struct guy fellow = {
        {"Donald", "Duck"},
        "grilled salmon",
        "cartoon character",
        99999.99
    };

    printf("Dear %s, \n\n", fellow); // access the fellow's first name
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job );
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3],fellow.favfood, msgs[4]);
    if(fellow.income > 150000.0)
        puts("!!");
    else if(fellow.income > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Mickey");

    return 0;
}

