/* Pattern 1
            *****
            *****
            *****
            *****
            *****    
*/

/* 
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"*****"<<'\n';
    }
    return 0;
}
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        cout<<"*";
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}
