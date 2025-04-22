#include <iostream>
using namespace std;

// First base class
class LandAnimal {
public:
    void walk() {
        cout << "Walking on land..." << endl;
    }
};

// Second base class
class WaterAnimal {
public:
    void swim() {
        cout << "Swimming in water..." << endl;
    }
};

// Derived class (multiple inheritance)
class Amphibian : public LandAnimal, public WaterAnimal {
public:
    void live() {
        cout << "Can live on land and in water" << endl;
    }
};

int main() {
    Amphibian frog;
    frog.walk();  // From LandAnimal
    frog.swim();  // From WaterAnimal
    frog.live();  // Own method
    return 0;
}