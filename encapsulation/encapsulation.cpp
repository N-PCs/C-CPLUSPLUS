#include <iostream>
#include <string>
using namespace std;

class Employee {
private:  // Private data members - hidden from outside world
    string name;
    int age;
    double salary;

public:  // Public methods - interface to access private data
    // Setter methods with validation
    void setName(string empName) {
        if (!empName.empty()) {
            name = empName;
        }
    }

    void setAge(int empAge) {
        if (empAge > 18 && empAge < 65) {
            age = empAge;
        }
    }

    void setSalary(double empSalary) {
        if (empSalary > 0) {
            salary = empSalary;
        }
    }

    // Getter methods
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getSalary() const {
        return salary;
    }

    // Method to display employee information
    void displayInfo() const {
        cout << "Employee Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp;

    // Set employee details using public methods (encapsulated access)
    emp.setName("John Doe");
    emp.setAge(30);
    emp.setSalary(75000.0);

    // Display employee information
    emp.displayInfo();

    // Try to set invalid values
    cout << "\nAttempting to set invalid values..." << endl;
    emp.setAge(15);  // Too young - won't be set
    emp.setSalary(-5000);  // Negative salary - won't be set

    // Show that invalid values weren't accepted
    cout << "\nAfter invalid attempts:" << endl;
    emp.displayInfo();

    // Access data through getters
    cout << "\nAccessing data through getters:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}