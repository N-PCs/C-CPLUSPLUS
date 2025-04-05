/* 4 Pilars of OOPs
                -Encapsulation
                -Abstraction
                -Inheritance
                -Polymorphism*/

/* Encapsulation - is wrapping up of data and member functions
                   in a single unit called class*/


/* Advantages - data hiding - done by using private keyword*/
#include <iostream>
#include <string>
using namespace std;

//Encapsulation
class Teacher
{ // can create multiple classes
private:
    double salary;      //data hiding

public: // access modifiers
    // properties/attributes/data
    string name;
    string dept;
    string sub;

    // methods/member functions
    void changedept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void setSalary(double s)
    {
        salary = s;
    }
    // getter
    void getSalary()
    {
        cout << salary << endl;
    }
};
int main()
{
    Teacher t1;
    Teacher t2;
    Teacher t3;
    t1.name = "Neel";
    t1.dept = "Computer Science";
    t1.sub = "OOPs";

    cout << t1.name << endl;
    cout << t1.dept << endl;

    t1.changedept("Electronics"); // changing dept by calling member function
    cout << t1.dept << endl;

    t1.setSalary(100000);
    t1.getSalary();

    return 0;
}