#include <iostream>

int multi(int a, int b) {
    return a * b;
}

int main() {
    int num1;
    int num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    int result = multi(num1, num2);
    std::cout << "The multiplication of " << num1 << " and " << num2 << " is: " << result <<std::endl;

    return 0;
}
