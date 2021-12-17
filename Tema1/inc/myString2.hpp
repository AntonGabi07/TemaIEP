#pragma once
#include <iostream>
#include <cstring>

class String{
    
    char *_str=nullptr;

public:
    String(){}
    String(const char *str); //normal constructor
    ~String();
    String(const String &target); //copy constructor
    String& operator = (const String &target); //copy assigment op
    
    char* getString();
    void setString(const char* newString);

    friend std::ostream & operator <<(std::ostream &out, const String &str);
};
