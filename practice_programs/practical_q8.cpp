#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int* marks;  // Pointer to dynamically allocated array

public:
    // Constructor
    Student(string n, int numSubjects) {
        name = n;
        marks = new int[numSubjects];  // Dynamic memory allocation
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        delete[] marks;  // Free dynamically allocated memory
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Student: " << name << endl;
    }
};

int main() {
    // Create object (constructor called)
    Student s1("Alice", 5);
    s1.display();

    {
        // Another object in a block scope
        Student s2("Bob", 3);
        s2.display();
        // Destructor for s2 called here when it goes out of scope
    }

    cout << "Main function ending..." << endl;
    // Destructor for s1 called here when program ends
    return 0;
}