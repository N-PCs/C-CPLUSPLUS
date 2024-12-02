// cin >> [insertion operator]
// cout << [extraction operator]

#include  <iostream>
using namespace std;
int main(){

    string name;
    string Name;
    int age;

    cout<<"What's Your  Name?"<<endl;
    cin>> name; // for input having no whitespaces 
    cout<<"What's your age?"<<endl;
    cin>> age;
    
    cout<<"What's Your Nick Name?"<<endl; //std::getline ,std::cin
    getline(cin>>ws,Name);                //removes any whitespaces from buffer
    // used when strings contain whitespaces
    cout<< "Hello " << name << " aged " <<age <<" years!"<<endl;
    cout<<"My nickname is "<<Name<<endl;
 






    return 0;
}