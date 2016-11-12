#include <iostream>
#include <cstring>
#include "String.h"


String::String()
{
    std::cout << "String()\n";
}

String::String(const char*p)
{
    std::cout << "String(const char*p)\n";
    ptr = new char[std::strlen(p)];
    std::strcpy(ptr, p);
}

String::String(const String& str)
{
    std::cout << "String(const String&)\n";
}

const String& String::operator=(const String& x)
{
    ptr = new char[std::strlen(x.ptr)];
    std::strcpy(ptr, x.ptr);
    
    std::cout << "operator=\n";
    return *this;
}

String::String(String&&)
{
    std::cout << "String(String&&)\n";
}

String& String::operator=(String&&)
{
    std::cout << "operator=(String&&)";
    return *this;
}

String::~String()
{
    std::cout << "~String()\n";
    if(nullptr) {
        delete ptr;
    }
}
