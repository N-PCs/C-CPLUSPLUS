#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void draw() {
        cout << "Drawing a shape..." << endl;
    }
};

// First derived class
class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing a circle" << endl;
    }
};

// Second derived class (same base class)
class Square : public Shape {
public:
    void drawSquare() {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Circle c;
    Square s;
    
    c.draw();       // From Shape
    c.drawCircle(); // Own method
    
    s.draw();       // From Shape
    s.drawSquare(); // Own method
    
    return 0;
}