#include <iostream>
using namespace std;

class Shape {
public:
    // Static poly (overloading)
    void draw(int s) { cout << s << "-sided shape\n"; }
    void draw(string n) { cout << n << " shape\n"; }

    // Dynamic poly (virtual)
    virtual void area() { cout << "Generic area\n"; }
};

class Circle : public Shape {
public:
    void area() override { cout << "Circle area\n"; }
};

int main() {
    // Static
    Shape s;
    s.draw(4);        // Calls draw(int)
    s.draw("custom"); // Calls draw(string)

    // Dynamic
    Shape* ptr = new Circle();
    ptr->area();      // Calls Circle's area()
    delete ptr;

    return 0;
}