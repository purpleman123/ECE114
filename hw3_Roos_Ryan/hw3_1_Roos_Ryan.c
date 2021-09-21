#include <stdio.h>
#include <math.h>

int main(){
    int fretnum, fretcounter;
    float length, nut, previousnut, frettofret;
    char note;
    fretcounter=0;
    printf("What's the scale length in mm? ");
    scanf("%f", &length);
    printf("What's the number of frets? ");
    scanf("%d", &fretnum);
    printf("note     fret     from nut(mm)     fret to fret(mm)\n");
    while (fretcounter!=fretnum+1)
    {
        nut=(length-(length*(pow(0.5,fretcounter/12.0))));
        previousnut=(length-(length*(pow(0.5,(fretcounter-1)/12.0))));
        frettofret=nut-previousnut;
        printf("%-10d%-20.2f%-20.2f\n", fretcounter, nut, frettofret);

        if (note==A)
            note=A#;
        else
        {
            if (note==A#)
            note=B;
            else
            {
                if (note==B)
                note=C
            }
        }
        fretcounter++;
    }
return 0;
}