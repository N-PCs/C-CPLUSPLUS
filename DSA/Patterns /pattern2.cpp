/*  Pattern 2
            *
            **
            ***
            ****
            *****
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        cout<<"*";
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}
