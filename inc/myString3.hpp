#pragma once
#include <iostream>

class String{
    
    char *_str;

public:

    String(const char *str=nullptr); //normal constructor
    ~String();
    String(const String &target)=delete; //copy constructor
    String& operator = (const String &target)=delete; //copy assigment op
    
    char* getString();
    void setString(const char* newString);

    friend std::ostream & operator <<(std::ostream &out, const String &str);
};
