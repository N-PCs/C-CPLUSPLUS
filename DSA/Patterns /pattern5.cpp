/* Pattern 5
    *****
    ****
    ***
    **
    *
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n;i>0;i--){
        cout<<"*";
        for(int j=i;j>1;j--){
            cout<<"*";
        }
        cout<<'\n';
    }

    return 0;
}
