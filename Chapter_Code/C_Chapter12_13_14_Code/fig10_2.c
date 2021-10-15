//fig10_2.c from C How to Program, 7th ed., p.410
#include <stdio.h>

// card structure definition
struct card{
    char face[10];
    char suit[10];
};
    

int main(void)
{
    // define one struct card variable
    struct card aCard = {"Ace", "Spades"};
    
    // define a pointer to a struct card
    struct card * cardPtr = &aCard;

    // assign address of aCard to cardPtr

    printf("%s%s%s\n", aCard.face, " of ", aCard.suit);
    printf("%s%s%s\n", cardPtr->face  , " of ", cardPtr->suit);
    printf("%s%s%s\n", (*cardPtr).face  , " of ", (*cardPtr).suit);

    return 0;
}
