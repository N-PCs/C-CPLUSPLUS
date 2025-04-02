/* arithmetic operators :return the result of a 
                         specific arithmetic operation 
                         (+ - * /)
 */
#include <iostream>

using namespace std;
int main(){

    int s=20;

    s+=1; //additon
    cout<< s <<'\n';
//here s=21
    s-=1 ;//subtraction
    cout<< s <<'\n';
//here s=20
    s*=2;  //division
    cout<< s <<'\n';
//here s=40
    s/=2;   //multiplication
    cout<< s <<'\n';
//here s=20 , another method to incremnt/decrement
//applicable only to addition and subtraction
    s++;
    cout<< s <<'\n';
    s--;
    cout<< s <<'\n';

    int remainder=s%2;
    cout<<remainder<<endl;  //output will be zero
    
    int remainders=s%3;
    cout<< remainders <<'\n';

/* In multiple arithmetic operations , we follow PMDAS method:
            1.Parentheses()
            2.Multiplication * & Division /
            3.Addition + & Subtraction 
*/

    int sa=(6*2)-5+4*3/2;
    cout<< sa <<'\n';

    return 0;
}