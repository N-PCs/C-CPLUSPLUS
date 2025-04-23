#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    // Overloaded add functions
    int add(int a, int b) {
        cout << "Adding two integers: ";
        return a + b;
    }
    
    double add(double a, double b) {
        cout << "Adding two doubles: ";
        return a + b;
    }
    
    string add(string a, string b) {
        cout << "Concatenating two strings: ";
        return a + b;
    }
    
    int add(int a, int b, int c) {
        cout << "Adding three integers: ";
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    
    cout << calc.add(5, 7) << endl;
    cout << calc.add(3.2, 4.5) << endl;
    cout << calc.add("Hello", " World") << endl;
    cout << calc.add(1, 2, 3) << endl;
    
    return 0;
}