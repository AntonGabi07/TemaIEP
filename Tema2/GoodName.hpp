#pragma once
#include <iostream>

class GoodName{
    
    char *_name=nullptr;

public:

    GoodName(){}
    GoodName(const char *name); //normal constructor
    ~GoodName();
    
    void setName(const char* newName);

    GoodName& operator=(const GoodName &rhs);

    friend std::ostream & operator <<(std::ostream &out, const GoodName &n);
};