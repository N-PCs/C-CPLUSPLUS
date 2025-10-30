#include <iostream>
using namespace std;

// Base class 1
class Person {
public:
    void displayPerson() {
        cout << "I am a person" << endl;
    }
};

// Base class 2
class Employee {
public:
    void displayEmployee() {
        cout << "I am an employee" << endl;
    }
};


// Derived class 1 (hierarchical)
class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a student" << endl;
    }
};

// Derived class 2 (multiple inheritance)
class WorkingStudent : public Person, public Employee {
public:
    void displayWorkingStudent() {
        cout << "I am a working student" << endl;
    }
};

int main() {
    Student s;
    WorkingStudent ws;
    
    s.displayPerson();
    s.displayStudent();
    
    ws.displayPerson();
    ws.displayEmployee();
    ws.displayWorkingStudent();
    
    return 0;

}
