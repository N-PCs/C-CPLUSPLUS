/* typedef = reserved keyword used to create an
            additional name(alias) for another 
            datatype.
            Acts as new identifier for an existing type.
            Helps with readability and reduces typos 
            typedef has been replaced with 
            'using' keyword as it works better with templates.
            */
    

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>>pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t =std::string;
using number_t = int;   

int main(){

    text_t name= "NEEL";   // behaves like string datatype
    number_t age= 18;      // behaves like int datatype

    std::cout<< name <<'\n';
    std::cout<<age<<'\n';

    return 0;
}