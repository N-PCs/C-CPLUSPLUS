#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define EMPTY -1

int hashTable[SIZE];

// The Single Hash Function (Division Method)
int hashFunction(int key) {
    return key % SIZE;
}

// Insert into table using Linear Probing
void insert(int key) {
    int index = hashFunction(key);
    
    // Probing for the next empty slot
    while (hashTable[index] != EMPTY) {
        index = (index + 1) % SIZE; // Linear increment
    }
    hashTable[index] = key;
}

// Search for a key in the table
int search(int key) {
    int index = hashFunction(key);
    int startPos = index;

    while (hashTable[index] != EMPTY) {
        if (hashTable[index] == key) return index;
        index = (index + 1) % SIZE;
        if (index == startPos) break; // Table fully searched
    }
    return -1;
}

int main() {
    for (int i = 0; i < SIZE; i++) hashTable[i] = EMPTY;

    insert(12); // Index 2
    insert(22); // Collision! Moves to Index 3
    insert(42); // Collision! Moves to Index 4

    printf("Key 22 found at index: %d\n", search(22));
    return 0;
}
