// C struct
// https://beginnersbook.com/2014/01/c-structures-examples/
#include <stdio.h>
#include <string.h>

// type define a struct called STUDENT
/*
    Three elements:
    1. name: student name
    2. id: student id 
    3. age: age
*/

int main(int argc, char const *argv[])
{
         /* student is the variable of structure StudentData*/
         // define a variable of STUDENT called MomoLee

     /*Assigning the values of each struct member here*/

   //   MomoLee.name = "Daisy Lee";
   // strcpy(MomoLee.name, "Daisy Lee");
   // not allowed, Why?
   /*
     DaisyLee->name = "Daisy Lee";
     DaisyLee->id = 4321;
     DaisyLee->age = 10;
   */
     /* Displaying the values of struct members */
     printf("Student Name is: %s", );
     printf("\nStudent Id is: %d", );
     printf("\nStudent Age is: %d\n",);
/*
     printf("Student Name is: %s", DaisyLee->name);
     printf("\nStudent Id is: %d", DaisyLee->id);
     printf("\nStudent Age is: %d\n", DaisyLee->age);
*/
     
     return 0;

}

