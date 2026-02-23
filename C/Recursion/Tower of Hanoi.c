#include <stdio.h>

// n: number of disks, from: source, to: destination, aux: helper
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) { // Base Case: Only one disk to move
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    // Step 1: Move n-1 disks from Source to Aux
    towerOfHanoi(n - 1, from, aux, to);
    
    // Step 2: Move the nth (largest) disk from Source to Destination
    printf("Move disk %d from %c to %c\n", n, from, to);
    
    // Step 3: Move the n-1 disks from Aux to Destination
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n = 3; 
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
