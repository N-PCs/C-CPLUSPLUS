// Program to calculate hypotenuse of a right angle triangle

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double height;
    double base;
    double hypo;

    cout<<"Enter the height : "<<'\n';  
    cin>>height;        //taking height input

    cout<<"Enter the base length : "<<'\n';
    cin >>base;         // taking base legth input

    //reassigning values to height, base using math functions

    height=pow(height,2);  //now height=height**2
    base=pow(base,2);      //now base = bse**2 

    //implementing pythagoras theorem to find hypotenuse length
    hypo=sqrt(height+base);  
    cout<<"Given height => "<<pow(height,0.5)<<'\n';
    cout<<"Given base length => "<<pow(base,0.5)<<'\n';
    cout<<"Thus, the length of hypotenuse of given triangle is => "<<hypo<<'\n';


    return 0;
}

//the same program can be written by declaring hypo in other way i.e
// hypo=sqrt(pow(height,2)+pow(base,2))