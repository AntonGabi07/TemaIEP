#pragma once
#include <iostream>

class GoodName{
    
    char *_name;

public:

    GoodName(const char *name=nullptr); //normal constructor
    ~GoodName();
    
    void setName(const char* newName);

    GoodName& operator=(const GoodName &rhs);

    friend std::ostream & operator <<(std::ostream &out, const GoodName &n);
};