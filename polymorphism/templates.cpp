#include <iostream>
#include <string>
using namespace std;

// Function template
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Class template
template <class T>
class Container {
private:
    T value;
public:
    Container(T val) : value(val) {}
    T getValue() { return value; }
    void setValue(T val) { value = val; }
};

int main() {
    // Using function template with different types
    cout << "Max of 5 and 10: " << getMax(5, 10) << endl;
    cout << "Max of 3.14 and 2.71: " << getMax(3.14, 2.71) << endl;
    cout << "Max of 'A' and 'B': " << getMax('A', 'B') << endl;
    cout << "Max of \"apple\" and \"orange\": " 
         << getMax(string("apple"), string("orange")) << endl;
    
    // Using class template with different types
    Container<int> intContainer(42);
    Container<string> strContainer("Template Example");
    
    cout << "Integer value: " << intContainer.getValue() << endl;
    cout << "String value: " << strContainer.getValue() << endl;
    
    return 0;
}