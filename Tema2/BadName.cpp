#include "BadName.hpp"
#include <cstring>


BadName::BadName(const char* name){
    _name = new char[strlen(name)+1];
    strcpy(_name,name);
}

BadName::~BadName(){
    delete [] _name;
}

void BadName::setName(const char* newName){
    delete [] _name;
    _name = new char[strlen(newName)+1];
    strcpy(_name,newName);
}

std::ostream & operator<<(std::ostream &out, const BadName &n){
    out<<"My name is: "<<n._name<<std::endl;
    return out;
}

BadName& BadName::operator=(const BadName &rhs){ //bad = operator
    std::cout<<"This is what happens when you assign to self using a bad assign operator"<<std::endl;
    delete _name;
    _name = rhs._name;
    return *this;
}