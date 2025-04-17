#include <iostream>
using namespace std;

class Multi {
public:
    // Function declaration inside the class
    int multinum(int a, int b);
};

// Function definition outside the class
int Multi::multinum(int a, int b) {
    return a * b;
}

int main() {
    Multi calc; // Create an object of Multi class
    
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Call the member function to multiply the numbers
    int result = calc.multinum(num1, num2);
    
    cout << "The product of " << num1 << " and " << num2 
         << " is: " << result << endl;
    
    return 0;
}