// elseif.c: Multiple choice else if
#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter the score [0-100]: ");
    scanf("%d", &score);
    printf("Grade: ");

    // Complete this part.

    putchar('\n');

    return 0;
}
/*
if(score >= 90)
	   putchar('A');       // A: >= 90
else
{
	    if(score >= 80)      // B: 80 <= score && score < 90
	    	   putchar('B');
	    else
	    {
	    	    if(score >= 70)    // C: 70 <= score && score < 80
	    	    	   putchar('C');
	    	    else
	    	    {
	    	    	   if(score >= 60)  // D: 60 <= score && score < 70
	    	    		   putchar('D');
	    	    	   else              // F: score < 60
	    	    		   putchar('F');
	    	    }
	    }
}
	    */
