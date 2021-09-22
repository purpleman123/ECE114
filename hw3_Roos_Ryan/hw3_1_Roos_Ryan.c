//Ryan Roos ECE 114 
//HW3 Question 1 9/23/21
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int fretnum, fretcounter; // creation of ints used to store the desired number of frets along with a counter variable for the while loop
    float length, nut, previousnut, frettofret; // floats being used to store the fret to fret length, desired length along with the current from nut length and previous (these are used to calculate the fret to fret distance)
    char note[3]="G#"; // this is the char array being used to iterate through the order of notes in an octave
    fretcounter=0; // sets fretcounter to 0 to ensure proper while loop function
    printf("What's the scale length in mm? "); // lines 12-15 are used to gather and store length and fret number from user
    scanf("%f", &length);
    printf("What's the number of frets? ");
    scanf("%d", &fretnum);
    printf("note     fret     from nut(mm)     fret to fret(mm)\n"); // prints the headers for our tables that lable each row
    while (fretcounter!=fretnum+1) // start of while loop that will occure until desired number of frets is reached
    {
        nut=(length-(length*(pow(0.5,fretcounter/12.0)))); // this is the fuction found in the homework for calculating the total distance from nut to the last fret
        previousnut=(length-(length*(pow(0.5,(fretcounter-1)/12.0)))); // same function as above but calculates length of previous run, needed to calculate fret to fret
        if (fretcounter != 0) // the following if else is needed to make the program output "0" for the fret to fret of the zeroth run
        frettofret=nut-previousnut; 
        else
        frettofret=0;
        
        if (strcmp(note,"A")==0) // the following nested if else statments are needed to iterate through the notes in an octave, this is done with a char array that using the functions in strings.h can be compared to other strings in the if statment
            strcpy(note, "A#");  // and then be written over to have new values in the array. This is done 12 times and in a way that will repeat back to the start to ensure that even with more then 12 frets the proper output happens
        else
        {
            if (strcmp(note,"A#")==0)
                strcpy(note, "B");
            else
            {
                if (strcmp(note,"B")==0)
                strcpy(note, "C");
                else
                {
                    if (strcmp(note,"C")==0)
                    strcpy(note, "C#");
                    else
                    {
                        if (strcmp(note,"C#")==0)
                        strcpy(note, "D");
                        else
                        {
                            if (strcmp(note,"D")==0)
                            strcpy(note, "D#");
                            else
                            {
                               if (strcmp(note,"D#")==0)
                               strcpy(note, "E"); 
                               else
                               {
                                    if (strcmp(note,"E")==0)
                                    strcpy(note, "F");
                                    else
                                    {
                                        if (strcmp(note,"F")==0)
                                        strcpy(note, "F#");
                                        else
                                        {
                                            if (strcmp(note,"F#")==0)
                                            strcpy(note, "G");
                                            else
                                            {
                                                if (strcmp(note,"G")==0)
                                                strcpy(note, "G#");
                                                else
                                                {
                                                    if (strcmp(note,"G#")==0)
                                                    strcpy(note, "A");
                                                }
                                            }
                                        }
                                    }    
                               }
                            }
                        }
                    }
                }        
            }
        }
        
        printf("%-9s%-9d%-17.2f%.2f ", note, fretcounter, nut, frettofret); // after all calculations and preperations are done above this line is the properly formatted output that includes the note, fret, from nut distance and fret to fret distance
        if (fretcounter != 0) // this final if else statment is included to show which fret to fret the distance is for, the else is needed because for run zero no fret to fret number is shown
            printf("(%d-%d)\n", fretcounter-1, fretcounter);
        else
            printf("\n");
        fretcounter++; // increases the counter variable by 1 at end of loop to begin the next loop and print out the next set of information, is also needed to ensure while loop ends
    }
return 0;
}