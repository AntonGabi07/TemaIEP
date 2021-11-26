#pragma once
#include <iostream>

class BadName{
    
    char *_name;

public:

    BadName(const char *name=nullptr); //normal constructor
    ~BadName();
    
    void setName(const char* newName);

    BadName& operator=(const BadName &rhs);

    friend std::ostream & operator <<(std::ostream &out, const BadName &n);
};