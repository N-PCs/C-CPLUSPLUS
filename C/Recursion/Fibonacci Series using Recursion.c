int fibonacci(int n) {
    // Base Cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive Case: call itself twice (Tree Recursion)
    return fibonacci(n - 1) + fibonacci(n - 2);
}
