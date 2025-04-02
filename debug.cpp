#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int intResult = add(5, 10); 
    float floatResult = add(5.5f, 2.3f); 

    cout << "Sum of integers: " << intResult <<'\n';
    cout << "Sum of floats: " << floatResult;
    return 0;
    }
