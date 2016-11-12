#include <utility>
#include <iostream>
#include "String.h"


int main(int, char**)
{

    std::cout << "String s1\n";
    String s1;
    std::cout << "String s2{s1}\n";
    String s2{s1};
    std::cout << "s2=s1\n";
    s2=s1;
    String s12;
    s2=s12;
    std::cout << "String s4=std::move(s1)\n";
    String s4=std::move(s1);
    
    std::cout << "s4=std::move(s2)\n";
    s4=std::move(s2);
    return 0;
}
