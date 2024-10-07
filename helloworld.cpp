#include <iostream>

int main(){
    
    int age=21;
    int year=2023;
    int days=7.5;
    int neel=age+year;
    std::cout <<days << std::endl;
    std::cout <<year <<std::endl;
    std::cout <<neel <<std::endl;

    // double(number including decimals)
    double price=10.98;
    double tempr =25.1;

    std::cout << tempr<<"\n";
    std::cout <<price <<std::endl;

    //char (single letters) can store only one letter

    
    char grade='A';
    char curr='$';
    std::cout << curr << std::endl;
    std::cout<< grade << std::endl;

    // boolean(true and false)
    
    bool student=true;
    bool forsale=true;
    bool power= false;

    //string(sentence)
    std::string name="Neel";
    std::cout<<name<<'\n';
    std::string day="sunday";
    std::cout <<day << std::endl;
    std::string food="spaghetti";
    std::cout <<food<<'\n';
    std::string address="hamilton park";
    std::cout << address<<'\n';


    //printing multiple data types

    std::cout<<"hello " << name;
    std::cout<<" your age is " << age;


   return 0;

}
