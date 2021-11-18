// hw9_2_LastName_FirstName.cpp: Template for Assignment #9, Q2
// Please update the file name.
#include <iostream>
#include <string>
#include <vector>

/*
 * Define a struct called PERSON:
 * Holds a person's information: name, address, and age.
 */
struct PERSON{
    std::string name;
    std::string address;
    int age;
}

/* Function declarations here*/
/*
createPerson(): It takes the name, address, and age as arguments and returns a PERSON struct.
addPerson(): It takes a reference to the people vector and a PERSON struct. It does not return anything. Use this function to add a person to the vector. 
printPeople(): It takes a reference to the people vector and a PERSON struct. It does not return anything. Use this function to print the entire list.
*/


int main() {
    // A list of people
    std::vector<PERSON> people;  // create an object of empty std::vector<PERSON>

    /* Add people one by one */
    PERSON p; // for add a person

    p = createPerson("Minnie Mouse", "Disneyland");     // passing only one argument
    addPerson(people, p);

    p = createPerson("Donald Duck", "Disneyland", 90);    // passing three arguments
    addPerson(people, p);

    p = createPerson("Cash Close", "Off Campus", 21); // passing three arguments
    addPerson(people, p);

    p = createPerson();    // pass no arguments (use default arguments)
    addPerson(people, p);  // append the PERSON struct just created to the vector

    p = createPerson("Eric Cartman", "South Park", 24);  // passing three arguments
    addPerson(people, p);

    p = createPerson("Homer Simpsons", "Springfield", 32); // passing three arguments
    addPerson(people, p);

    printPeople(people);   // print all the people

    return 0;
}

// Add function definitions here
