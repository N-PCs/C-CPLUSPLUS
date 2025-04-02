#include <iostream>
int main(){
    using namespace std;
    char op;
    double n1,n2;
    double result;

    cout<<"*************CALCULATOR*************"<<'\n';

    cout<<"enter either (+ - * / ) => ";
    cin>>op;
    cout<<"enter n1 -->";
    cin>>n1;
    cout<<"enter n2 -->";
    cin>>n2;

    switch(op){
        case '+':
            result=n1+n2;
            break;
        case '-':
            result=n1-n2;
            break;
        case '*':
            result=n1*n2;
            break;
        case '/':
            result=n1/n2;
            break;
        default:
            cout<<"enter valid operator!";
    }
    cout<<"the result is = "<<result<<'\n';
    cout<<"*************CALCULATOR*************"<<'\n';

    return 0 ;
}