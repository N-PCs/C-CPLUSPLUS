// Write a program to find prime number entered by user with the help of class.
#include <iostream>
using namespace std;
class prime
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter the number : ";
        cin >> a;
    }
    void primeno()
    {
        int i = 2;
        for (i >= 2; i <= a - 1; i++)
        {
            if (a % i == 0)
            {
                cout << "Number is not prime";
                break;
            }
            else
            {
                cout << "Number is prime !";
                break;
            }
        }
    }
};

int main()
{
    prime p;
    p.get();
    p.primeno();
    return 0;
}