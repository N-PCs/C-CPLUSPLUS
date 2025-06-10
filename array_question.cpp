/* Create an array that can hold ten integers, and get input from user. Display those 
values on the screen, and then prompt the user for an integer. Search through the 
array, and count the number of times the item is found. */

#include <iostream>
using namespace std;

int main(){
    const int Size=10;
    int number[Size];

    //take 10 inputs from user
    cout<<"Enter 10 integers"<<endl;
    for(int i=0;i<Size;i++){
        cout<<"Enter int "<<i+1<<":"<<endl;
        cin>>number[i];
    }

    //give output 
    cout<<"The numbers entered are"<<endl;
    for(int i=0;i<Size;i++){
        cout<<number[i]<<endl;
    }

    //search number
    int searchnum , count=0;
    cout<<"enter number to be searched "<<endl;
    cin>>searchnum;
    for(int i=0;i<Size;i++){
        if(number[i]==searchnum){
            count++;
        }

    }

    cout<<"Number Searched :"<<searchnum<<'\n';
    cout<<"Number of Occurences :"<<count;


    return 0;
}