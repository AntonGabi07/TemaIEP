#include<iostream>
#include<cstring>

#include<myString2.hpp>

String::String(const char *str){
    _str = new char[strlen(str)+1];
    strcpy(_str,str);
}

String::~String(){
    delete [] _str;
}

String::String(const String &target){
    std::cout<<"This is a copy constructor call\n";
    _str = new char[strlen(target._str)+1];
    strcpy(_str,target._str);
}

String& String::operator=(const String &target){
    std::cout<<"This is a copy assign operator call";
    if(this != &target){
        delete [] _str;
        _str = new char[strlen(target._str)+1];
        strcpy(_str,target._str);
    }
    return *this;
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