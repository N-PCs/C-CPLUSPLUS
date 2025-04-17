#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // 1. Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called" << endl;
    }

    // 3. Copy Constructor
    Rectangle(const Rectangle &obj) {
        length = obj.length;
        width = obj.width;
        cout << "Copy constructor called" << endl;
    }

    // Member function to calculate area
    int calculateArea() {
        return length * width;
    }

    // Member function to display dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    // Using default constructor
    Rectangle rect1;
    cout << "Area of rect1: " << rect1.calculateArea() << endl;

    // Using parameterized constructor
    Rectangle rect2(5, 3);
    cout << "Area of rect2: " << rect2.calculateArea() << endl;

    // Using copy constructor
    Rectangle rect3 = rect2;
    cout << "Area of rect3: " << rect3.calculateArea() << endl;

    return 0;
}