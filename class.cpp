#include <iostream>
#include <conio.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    void getdata(void);
    void putdata(void);
};
void person::getdata(void){
    cout<<"enter the name ";
    cin>>name;
    cout<<"enter the age ";
    cin>>age;
}

void person::putdata(void){
    cout<<"My name is "<<name<<'\n';
    cout<<"My age is "<<age;
}

int main(){
    person p;
    p.getdata();
    p.putdata();
    getch();
}
