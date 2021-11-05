#pragma once
#include <iostream>

class String{
    
    char *_str;

public:

    String(const char *str=nullptr); //normal constructor
    ~String();
    
    char* getString();
    void setString(const char* newString);

    friend std::ostream & operator <<(std::ostream &out, const String &str);
};
