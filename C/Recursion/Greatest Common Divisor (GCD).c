int gcd(int a, int b) {
    if (b == 0) // Base Case: Remainder is 0
        return a;
    return gcd(b, a % b); // Recursive Case
}
