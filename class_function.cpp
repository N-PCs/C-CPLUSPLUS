/*Write a program to multiply two no. Entered by user by defining function declared and
definition inside the class.*/

#include <iostream>
using namespace std;

class Multi {
    public:
    int a, b; // Member variables

        // Function declared and defined inside the class
    void multiply() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Multiplication: " << a * b << endl;
    }
};

int main() {
    Multi m; // Creating an object of class Multi
    m.multiply(); // Calling the function
    return 0;
}


