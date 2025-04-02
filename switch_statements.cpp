/* switch => alternative to using many 
            "else if" statements
            compares one value to matching class*/

#include <iostream>
using namespace std;
int main(){

    char grade;
    cout<<"enter grade (A,B,C,D,E,F) => ";
    cin>>grade;
    switch(grade){
        case 'A':
            cout<<"outstanding!";
            break;
        case 'B':
            cout<<"GOOD";
            break;
        case 'C':
            cout<<"average!";
            break;
        case 'D':
            cout<<"below average";
            break;
        case 'E':
            cout<<"just passed!";
            break;
        case 'F':
            cout<<"failed";
            break;         
        default:
            cout<<"enter grade form A to F only!";
        return 0;
    }
  

}