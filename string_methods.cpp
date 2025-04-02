#include <iostream>
int main(){
    std::string name; 
    std::cout<<"enter name ";
    std::getline(std::cin,name);
    if(name.length()>12){       //.length gives length of strings 
        std::cout<<"ur name can't be longer than 12 letters"<<'\n';
    }
    else{
        std::cout<<"Welcome "<<name<<'\n';
    }
    if(name.empty()){          //.empty() checks if string is empty or not
        std::cout<<"u didn't enter ur name!"<<'\n';}
    else{
        std::cout<<"hello "<<name<<'\n';
    }
    name.append("@gmail.com");   //used to add another string 
    std::cout<<name<<'\n';

    std::cout<<name.at(0)<<endl; //used to display values at given index

    name.erase(11,16);
    std::cout<<name<<'\n';

    name.insert(0,"Mr.");   //used to insert an element at required index
    std::cout<<name<<'\n';

    name.clear();  //clears whole string

    std::cout<<"hello"<<name<<'\n';
    return 0;

}