/* using keyword => used to save some time from writing whole code
                    helps in runnig the library without writing the code 
                    again and again !
                    */

#include <iostream>

int main(){

    using namespace std;
    string n="NEeL";
    cout<<n <<endl;
    cout<<"NEEl"<<endl; //here there was no need to write the code std::

    //but these namespace std:: has naming issues

    // so the safer alternative would be
    using std::cout;
    using std::string;

    cout<<"Neel's prime is here !"<<'\n';

    return 0;
}