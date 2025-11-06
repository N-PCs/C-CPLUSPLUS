#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};
// Derived class (single inheritance)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};
int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Own method
    return 0;

}
