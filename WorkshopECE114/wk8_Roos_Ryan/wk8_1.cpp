#include <iostream>

int main(int argc, char const *argv[]){
    using namespace std;
    string name;
    int row, column;
    cout << "Enter the matrix name: ";
    getline(cin, name );
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;
    cout << name << ":\n";
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < column; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    

return 0;    
}