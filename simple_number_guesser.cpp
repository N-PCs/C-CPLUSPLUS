#include <iostream>
using namespace std;

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num=rand()%100 +1;

    cout<<"***************NUMBER GUESSING GAME*******************\n";
    do{
        cout<<"enter a guess 1-100 : ";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"Too high!\n";
        }
        else if(guess<num){
            cout<<"Too low!\n";
        }
        else{
            cout<<"Correct !"<<'\n';
            cout<<"Number was : "<<num<<'\n';
            cout<<"Number of tries :"<<tries<<endl;
        }
    }while(guess!=num);
    
    return 0;
}