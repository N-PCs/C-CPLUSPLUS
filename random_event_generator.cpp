#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int randNum=rand()%5+1;

    switch(randNum){
        case 1: cout<<"Np da G.O.A.T";
                break;
        case 2: cout<<"Np Papa da real hero";
                break;
        case 3: cout<<"Np Mom da real hero";
                break;
        case 4: cout<<"Np siblings real fighter";
                break;
        case 5: cout<<"Np is overall the greatest necromancer";
                break;
    }
    return 0;
}