  /*Namespace => provides solution preventing name     
    conflicts in large projects.
    Each entity needs a unique name .
    A program allows for identically named entities 
    as long as the namespaces are different.
    */

#include <iostream>

namespace first{
    int x =1;
}

namespace second{
    int x=2;
}

int main(){

    int x = 0;

    std::cout<< x <<'\n';
    std::cout<<first::x<<'\n';
    std::cout<<second::x<<'\n';
    //This will differnt value of x for different namespaces
    
   return 0;

}

