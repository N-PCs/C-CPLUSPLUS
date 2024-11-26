/*This is the starting of N-PCs journey in C++
 */

#include <iostream>
int main(){

    //basic printing
    //std => standard ; cout => character output 
    //endl => endline character
    // '\n' is used to create space between two outputs
    
    std::cout<< "Hello World!"<<std::endl;
    std::cout<<"This code is written by N-PCs"<<'\n';

    // Variable : Stores value
    // Two steps; Decalaration and Assignment

    int x ; //declaration
    x=5; // assignement
    std::cout<<x<<std::endl;
    // int datatype stores only integers and not decimals or fraction
    // int y=5.1 will show error
    //Or you can assign value to variable in one step itself 
    int y=10;
    std::cout<<y<<'\n';
    

    //double => integers+decimals 
    double p=2.5;
    double temp=25;
    double gpa=9.5;
    std::cout<<p<<'\n';
    std::cout<<temp<<'\n';
    std::cout<<gpa<<'\n';

    //char => single character
    char grade='S';
    char initial='A';
    char currency='$';
    std::cout<<grade<<'\n';
    std::cout<<initial<<std::endl;
    std::cout << currency<<'\n';

    //boolean => True or False 
    bool student =true;
    bool power=false;
    bool forsale=true;
    std::cout<< not student<<'\n';
    std::cout<< student<<'\n';

    //string=> sequence of characters enclosed within quotes.
    // ''(single quotes) and ""(double quotes) have different meaning in c++.
    std::string name="NEEL";
    std::string alias="N-PCs";
    std::cout<<name<<'\n';
    std::cout<<alias<<std::endl;
    //printing multiple strings together 
    std::cout<<"Hello , My name is "<<name <<" a.k.a "<<alias<<'\n';

    return 0;



}