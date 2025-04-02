#include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    char symbol;

    cout<<"how many rows"<<'\n';
    cin>>rows;
    cout<<"how many columns"<<'\n';
    cin>>columns;

    cout<<"enter a symbol to use"<<'\n';
    cin>>symbol;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout<<symbol<<' ';
        }
        cout<<'\n';
    }
 
    return 0;
}