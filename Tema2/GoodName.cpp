#include "GoodName.hpp"
#include <cstring>


GoodName::GoodName(const char* name){
    _name = new char[strlen(name)+1];
    strcpy(_name,name);
}

GoodName::~GoodName(){
    delete [] _name;
}

void GoodName::setName(const char* newName){
    delete [] _name;
    _name = new char[strlen(newName)+1];
    strcpy(_name,newName);
}

std::ostream & operator<<(std::ostream &out, const GoodName &n){
    out<<"My name is: "<<n._name<<std::endl;
    return out;
}

GoodName& GoodName::operator=(const GoodName &rhs){ //Good = operator
    std::cout<<"This is what happens when you use a good assign operator"<<std::endl;
    if(this == &rhs) return *this;
    delete _name;
    _name = rhs._name;
    return *this;
}