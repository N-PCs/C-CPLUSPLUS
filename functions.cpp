#include <iostream>
using namespace std;

void h(string i){
    cout<<"Happy "<<i<<'\n';
}
void n(string j){
    cout<<"No "<<j<<'\n';
};
int main(){
    h("birthday !");
    h("halloween !");
    h("Diwali");
    n("Holiday!");
    n("Exams !");
    n("Rest");
    return 0;
}