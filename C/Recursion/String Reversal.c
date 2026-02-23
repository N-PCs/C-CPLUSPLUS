void reverseString(char* str) {
    if (*str == '\0') // Base Case: End of string
        return;
    reverseString(str + 1); // Recursive Call for next character
    printf("%c", *str);     // Print after returning from the call
}
