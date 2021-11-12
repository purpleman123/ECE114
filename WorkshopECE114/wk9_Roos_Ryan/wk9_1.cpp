// wk9_1.cpp: std::string and std::vector
#include <iostream>
#include <vector>
// include the headers for std::string and std::vector


int main(void) {
    std::string firstname, lastname; // define std::string objects to save the first name and the last name.
    std::string name;
    std::string ifcontinue; 
    std::vector<std::string> attendees;         // create an empty vector to save std::string objects
    int numbers = 0;   // number counter
    // Use a loop to enter name by name and save a full name to the vector.
    do
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, firstname);
        std::cout << "Enter last name: ";
        std::getline(std::cin, lastname);
        std::cout << "Continue? ";
        std::cin >> ifcontinue;
        if (ifcontinue != "Y" || ifcontinue != "N"){
            std::cout << "Wrong input! Enter again: ";
            std::cin >> ifcontinue;
        }
        numbers++;
    } while ( ifcontinue == "Y");
    
    // display:
    std::cout << "Names:\n";
    for (int i = 1; i <= numbers; i++)
    {
        std::cout << i << ". " <<  << std::endl;
    }
    
    
    return 0;
}
