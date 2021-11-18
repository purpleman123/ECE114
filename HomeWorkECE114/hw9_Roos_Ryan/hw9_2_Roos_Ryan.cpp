// hw9_2_LastName_FirstName.cpp: Template for Assignment #9, Q2
// Please update the file name.
#include <iostream>
#include <string>
#include <vector>

// Define a struc called PERSON:
struct PERSON{
    std::string name;
    std::string address;
    int age;
};

/* Function declarations here*/
PERSON createPerson(std::string name = "Mickey Mouse", std::string address = "Disney World", int age = 94);
void addPerson(std::vector<PERSON> inputVector, PERSON P);
void printPeople(std::vector<PERSON> outputVector);

int main() {
    // A list of people
    std::vector<PERSON> people;  // create an object of empty std::vector<PERSON>

    /* Add people one by one */
    PERSON p; // for add a person

    p = createPerson("Minnie Mouse", "Disneyland");     // passing only one argument
    addPerson(people, p);
people.push_back(p);
    p = createPerson("Donald Duck", "Disneyland", 90);    // passing three arguments
    addPerson(people, p);
people.push_back(p);
    p = createPerson("Cash Close", "Off Campus", 21); // passing three arguments
    addPerson(people, p);
people.push_back(p);
    p = createPerson();    // pass no arguments (use default arguments)
    addPerson(people, p);  // append the PERSON struct just created to the vector
people.push_back(p);
    p = createPerson("Eric Cartman", "South Park", 24);  // passing three arguments
    addPerson(people, p);
people.push_back(p);
    p = createPerson("Homer Simpsons", "Springfield", 32); // passing three arguments
    addPerson(people, p);
people.push_back(p);
    printPeople(people);   // print all the people

    return 0;
}

// Add function definitions here
PERSON createPerson(std::string name, std::string address, int age){
    PERSON person;
    person.name = name;
    person.address = address;
    person.age = age;
return person;
}

void addPerson(std::vector<PERSON> inputVector, PERSON P){
    inputVector.push_back(P);
}

void printPeople(std::vector<PERSON> outputVector){

   std::cout << "List of People:\n";
   for (int i = 0; i < 6; i++){
        std::cout << outputVector[i].name << "\n";
        std::cout << "   Address: " << outputVector[i].address << "\n";
        std::cout << "   Age: " << outputVector[i].age << "\n";
    }
}