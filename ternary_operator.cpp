/* ternary operator --> replacement for
                        if-else statement
    syntax:
    condition ? expression1 : expression2;
*/

#include <iostream>
int main()
{
    using namespace std;
    int grade;
    cout << "enter grade";
    cin >> grade;
    grade >= 75 ? cout << "jee main eligible" << '\n'
                : cout << "ineligible for jee mains" << '\n';

    // another way to print
    cout << (grade >= 75 ? "jee main eligible" : "ineligible for jee mains");
    return 0;
}

/* we can use this program to make odd even program*/