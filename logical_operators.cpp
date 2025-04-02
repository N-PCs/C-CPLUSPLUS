// and operator => && => checks if both conditions are true
// or operator =>|| => checks if either of conditions are true
// not operator => ! =>reverses the logical state of its operand

#include <iostream>
int main(){
    using namespace std;
    int temp;
    cout<<"enter tem = ";
    cin>>temp;

    if(temp>=0 && temp<=15){
        cout<<"cold day!";
    }
    else if(temp>15 && temp<=25  ){
        cout<<"cool day!";}
    else{
        cout<<"hot day!";
    }
    return 0;
}