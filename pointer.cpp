#include <iostream>
using namespace std;

class multi {
    public:
    int a, b; // Member variables
    void multip(); // Function declaration
};
// Function definition outside the class
void multi::multip() {
    cout << "Enter a: ";
    cin >> a;
    int *p=&a;           //pointer variable
    cout << "Enter b: ";
    cin >> b;
    cout << "Multiplication: " << *p * b << endl;
}

int main() {
    multi m; // Creating an object of class multi
    m.multip(); // Calling the function correctly
    return 0;
}