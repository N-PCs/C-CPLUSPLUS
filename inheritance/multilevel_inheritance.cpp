#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// First level derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

// Second level derived class (multilevel)
class SportsCar : public Car {
public:
    void accelerate() {
        cout << "Sports car accelerating fast!" << endl;
    }
};

int main() {
    SportsCar myCar;
    myCar.start();      // From Vehicle
    myCar.drive();      // From Car
    myCar.accelerate(); // Own method
    return 0;
}