#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
    
    virtual double area() = 0; // Pure virtual function
    
    virtual ~Shape() {
        cout << "Shape destructor" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    void draw() override {
        cout << "Drawing a circle with radius " << radius << endl;
    }
    
    double area() override {
        return 3.14159 * radius * radius;
    }
    
    ~Circle() {
        cout << "Circle destructor" << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    void draw() override {
        cout << "Drawing a rectangle " << width << "x" << height << endl;
    }
    
    double area() override {
        return width * height;
    }
    
    ~Rectangle() {
        cout << "Rectangle destructor" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    
    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
        delete shapes[i];
        cout << endl;
    }
    
    // Another example with reference
    Circle circle(3.0);
    Rectangle rectangle(2.0, 4.0);
    
    Shape& shape1 = circle;
    Shape& shape2 = rectangle;
    
    shape1.draw();
    cout << "Area: " << shape1.area() << endl;
    
    shape2.draw();
    cout << "Area: " << shape2.area() << endl;
    
    return 0;
}