// fig10_03.c from C How to Program, 7th ed., p.412
// Card shuffling and dealing program using structures
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition with typedef
// ....

// prototypes
void fillDeck(Card * const wDeck, const char * wFace[],
              const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{
  // define an array of 52 Cards called deck here

    // initialize array of pointers
    const char * face[] = {"Ace", "Deuce", "Three", "Four", "Five",
          "Six", "Seven", "Eight", "Nine", "Ten",
          "Jack", "Queen", "King"};

    // initialize array of pointers
    const char * suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL)); // randomize

    fillDeck(deck, face, suit); // load the deck with Cards
    shuffle(deck);
    deal(deck);

    return 0;
}

// place strings into Card Structures
void fillDeck(Card * const wDeck, const char * wFace[],
    const char * wSuit[])
{
    int i; // counter

    // loop through wDeck
    // add your code
    // loop 1: 13 times, one for each face
    // nested loop 2: 0=a 1,2,3,4,5,6,7,8,9,10,11=queen,12=king then go back until done

}

// shuffle cards
void shuffle(Card * const wDeck)
{
    int i; // counter
    int j; // variable to hold random value between 0 - 51
    Card temp; // temporary struct for swapping cards

    // loop through wDeck randomly swapping Cards
    for(i = 0; i < CARDS; i++)
    {
        j = rand() % CARDS;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// deal cards
void deal(const Card * const wDeck)
{

    int i; // counter

    // loop through wDeck
    for(i = 0; i < CARDS; i++)
    {
        printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit,
               (i + 1) % 4 ? "  ": "\n");
    }

}


