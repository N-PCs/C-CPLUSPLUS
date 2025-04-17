#include <iostream>
using namespace std;
inline int calcArea(int side) {
    return side * side;
}
int main() {
    int length;
    cout << "Enter the side length of the square: ";
    cin >> length;
    int area = calcArea(length);
    cout << "Area of the square is: " << area << endl;
    return 0;
}
