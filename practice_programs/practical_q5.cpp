#include <iostream>
using namespace std;
inline int calcArea(int side) {
    return side*side;
}
int main() {
    int len;
    cout << "Enter the side length of the square: ";
    cin >> len;
    int area = calcArea(len);
    cout << "Area of the square is: " << area << endl;
    return 0;
}
