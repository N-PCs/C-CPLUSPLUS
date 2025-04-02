#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=20;i++){
        if(i>20){
            break;
        }
        if(i==13){  //will skip 13 and continue
            continue;
        }
        cout<<i<<'\n';
    }
    return 0;
}