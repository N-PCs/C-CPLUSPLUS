#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int num1=(rand()%6)+1;  //gives random number between 1 and 6
    int num2=(rand()%6)+1; 
    int num3=(rand()%6)+1; 
    cout<<num1<<',';
    cout<<num2<<',';
    cout<<num3;
    return 0;
}