#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string designation;
    double salary;

public:
    // Function to enter employee details
    void enterDetails() {
        cout << "\nEnter Employee Details:\n";
        cout << "Name: ";
        cin >> name;
        
        cout << "Age: ";
        cin >> age;
        
        cout << "Designation: ";
        cin >> designation;
        
        cout << "Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    
    emp.enterDetails();
    emp.displayDetails();
    
    return 0;
}