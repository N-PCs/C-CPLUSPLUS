/* Type conversion => conversion of a value of one datatype to another.
                      Implicit => automatically done by compiler
                      Explicit => done by programmer . precede the value
                                  with new datatype .*/

#include <iostream>
using namespace std;
int main(){
    
    int x=3.14;   //output will be 3 -> integer i.e implicit conversion.
    cout<<x<<endl;

    double y=3.14;
    cout<<y<<endl;  //retains 3.14 as value

    //explcit conversion
    double z=(int) y; //here y=3.14
    cout<< z<< endl;  //output is 3 again

    char a= 100;
    cout<<a<<endl;    //ascii value of 100 is d
    cout<<(char)100<<endl;

    int correct =8;
    int questions=10;
    double score=correct/(double)questions*100;
    // without using (double) , output will be 0% . check it yourself
    cout<<score<<"%"; // output will be 80% 



    return  0;
}