/* Polymorphism - Ability to take more than one form.
   Types Of Polymorphism -  Compile Time , Run Time
                            Operator Overloading , Function Overloading */

// Compile Time Polymorphism /Static Binding/Early Binding
/* In compile time polymorphism two are more same function name is defined in class but parameter should 
be different in each function (as stated in example). When function is called appropriate prototype is 
matched and when prototype matches then function get called. This is also a concept of overloading.*/

#include <iostream>
using namespace std;
class test
{
public:
   void sum(int a, int b)
   {
      cout << "enter a and b" << endl;
      cin >> a;
      cin >> b;
      cout << a + b << endl;
   }
   void sum(int a, int b, int c)
   { // Function Overloading
      cout << "enter a,b and c" << endl;
      cin >> a;
      cin >> b;
      cin >> c;
      cout << a + b + c << endl;
   }
};

int main()
{
   int i, j, k;
   test t;
   t.sum(i, j);
   t.sum(i, j, k);
   return 0;
}