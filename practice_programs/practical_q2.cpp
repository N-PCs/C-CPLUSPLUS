#include <iostream>
using namespace std;

class Subtract {
public:
    // Function declaration inside the class
    int subtractNum(int a, int b);
};

// Function definition outside the class
int Subtract::subtractNum(int a, int b) {
    return a - b;
}

int main() {
    Subtract calc; // Create an object of Subtract class
    
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Call the member function to subtract the numbers
    int result = calc.subtractNum(num1, num2);
    
    cout << "The difference between " << num1 << " and " << num2 
         << " is: " << result << endl;
    
    return 0;
}