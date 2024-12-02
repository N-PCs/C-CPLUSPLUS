//useful math function

#include <iostream>
#include <cmath>

int main(){

    double x=3;
    double y =4;
    double z;

    //max function
    z=std::max(x,y);
    std::cout<<z<<std::endl;


    //min function
    double j;
    j=std::min(x,y);
    std::cout<<j<<std::endl;

    //power function
    double k;
    double n;
    k=pow(x,y);
    n=pow(y,x);
    std::cout<<k<<'\n';  //returns 3**4 = 81
    std::cout<<n<<'\n'; //returns 4**3=64

    //square root function
    double g;
    g=sqrt(y);         //returns square root of 4 i.e 2
    std::cout<<g<<std::endl;

    //absolute value function
    double a=-9;
    double b;
    b=abs(a);
    std::cout<<b<<'\n';     //returns positive value always

    //round function
    double c=3.15684;
    double d;
    d=round(c);             //returns rounded off value
    std::cout<<d<<'\n';

    //ceil function => returns smallest integer greater than given argument i.e round up
    double e;
    e=ceil(c);  //c=3.15684
    std::cout<<e<<'\n';     //output will be 4

    //floor function => returns largest integers smaller than given argument i.e round down 
    double f ;
    f=floor(c);     //c=3.15684
    std::cout<<f<<std::endl; //otutput will be 3

/* for more cmath function ,  do visit
            www.cplusplus.com/refrence/cmath*/


    return 0;
}
