#include<iostream>
#include<cstring>

#include<myString3.hpp>

String::String(const char *str){
    _str = new char[strlen(str)+1];
    strcpy(_str,str);
}

String::~String(){
    delete [] _str;
}

void String::setString(const char* str){
    delete [] _str;
    _str = new char[strlen(str)+1];
    strcpy(_str,str);
}

std::ostream & operator<<(std::ostream &out, const String &str){
    out<<str._str;
    return out;
}