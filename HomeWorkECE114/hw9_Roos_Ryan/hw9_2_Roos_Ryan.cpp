// Ryan Roos 11/18/21
// hw9_2
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
void addPerson(std::vector<PERSON> &inputVector, PERSON &person);
void printPeople(std::vector<PERSON> outputVector);

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
PERSON createPerson(std::string name, std::string address, int age){ // this function will generate a person struct and will pass default arguments if supplied with less then the normal 3 inputs
    PERSON person;
    person.name = name;
    person.address = address;
    person.age = age;
return person;
}

void addPerson(std::vector<PERSON> &inputVector, PERSON &person){ // uses reference variables to directly effect the inputted vector
    inputVector.push_back(person);
}

void printPeople(std::vector<PERSON> outputVector){
    // compare each string 0-1, 1-2, 2-3, 3-4, 4-5, 5-6 ... repeat for 3 times which is enough to get everything in the right order
    int temp;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            if (outputVector[j].name.compare(outputVector[j+1].name) > 0){
                outputVector[j].name.swap(outputVector[j+1].name);
                outputVector[j].address.swap(outputVector[j+1].address);
                temp = outputVector[j].age;
                outputVector[j].age = outputVector[j+1].age;
                outputVector[j+1].age = temp;
            } 
        }  
    }
    // if .compare = lower then or equal to 0 stay the same
    // if .compare = higher then swap 
   std::cout << "List of People:\n";
   for (int i = 0; i < 6; i++){ // cycle through all 6 vectors and print them out in the correct format
        std::cout << outputVector[i].name << "\n";
        std::cout << "   Address: " << outputVector[i].address << "\n";
        std::cout << "   Age: " << outputVector[i].age << "\n";
    }
}