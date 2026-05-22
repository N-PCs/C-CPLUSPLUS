/* Pattern 3
    1
    12
    123
    1234
    12345
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        cout<<1;
        for(int j=2;j<i+1;j++){
            cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}
