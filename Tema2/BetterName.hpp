#pragma once 

#include <iostream>
#include "GoodName.hpp"

class BetterName : public GoodName{

    int _grade=0;

public:
    BetterName(){}
    BetterName(const char* name, int grade) : GoodName(name),_grade(grade){}
    BetterName(const BetterName &rhs);
    BetterName& operator=(const BetterName &rhs);

    void setGrade(int newGrade){
        _grade=newGrade;
    }

    friend std::ostream & operator <<(std::ostream &out, const BetterName &n);
};