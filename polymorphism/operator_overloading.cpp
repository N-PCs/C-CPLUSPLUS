#include <iostream>
using namespace std;

class Vector {
private:
    float x, y;
public:
    Vector(float x = 0, float y = 0) : x(x), y(y) {}
    
    // Overloading the + operator
    Vector operator+(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }
    
    // Overloading the << operator for output
    friend ostream& operator<<(ostream& os, const Vector& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
    
    // Overloading the == operator
    bool operator==(const Vector& other) {
        return (x == other.x) && (y == other.y);
    }
};

int main() {
    Vector v1(2.5, 3.5), v2(1.5, 2.5);
    Vector v3 = v1 + v2;
    
    cout << "Vector 1: " << v1 << endl;
    cout << "Vector 2: " << v2 << endl;
    cout << "Vector Sum: " << v3 << endl;
    
    if (v1 == v2) {
        cout << "Vectors are equal" << endl;
    } else {
        cout << "Vectors are not equal" << endl;
    }
    
    return 0;
}