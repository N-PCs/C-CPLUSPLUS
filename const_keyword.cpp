#include <iostream>

int main(){
    /*The const keyword specifies that a varible's value is constant .
    It tells the compiler to prevent anything from modifying it .
    (read-only) 
    common naming convention for const keyword is write the variable name
    in uppercase*/


    // program to find circumference of circle 
    const double PI=3.14159;  // declaring pi as constant 
    double Pi=420;  
    //it won't take this value as it has been declared as constand earlier with some other value 
    
    double r=10;
    double c=2*PI*r;  //circumference
    std::cout<<"The circumference of circle wirh radius "<<r<<" is "<<c<<" square units."<<'\n';

    const int LIGHT_SPEED=299792458;
    const int WiDTH=1920;
    const int HEIGHT=1080;

    // add some more constants to this file 
    return 0;

}