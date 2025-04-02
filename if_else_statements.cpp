
/* if statement --> perform action if condition is true
                    if not ,then doesn't*/

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter you age => ";
    cin>>age;
    if(age>18; age<=99){
        cout<<"you are eligible";
    }
    else if(age<0){
        cout<<"go back to studying maths!";
    }
    else if(age>=100){
        cout<<"your time's up!";
    }
    else{
        cout<<"you are a kid , go study!";
    }

    return 0;
}