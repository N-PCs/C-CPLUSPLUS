#include <stdio.h>

int factorial(int n) {
    // Base Case: the simplest version of the problem
    if (n == 0) 
        return 1;
    
    // Recursive Case: solve a smaller version of the same problem
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
