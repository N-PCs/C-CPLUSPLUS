/*  Pattern 4
    1
    22
    333
    4444
    55555
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<n+1;i++){
        cout<<i;
        for(int j=2;j<i+1;j++){
            cout<<i;
        }
        cout<<'\n';
    }
    
    return 0;
}
