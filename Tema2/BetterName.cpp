#include "BetterName.hpp"
#include "GoodName.hpp"

BetterName::BetterName(const BetterName &rhs) :  GoodName(rhs), _grade(rhs._grade)
{
    std::cout<<"This is BetterName copy constructor\n";
}

BetterName& BetterName::operator=(const BetterName &rhs){
    if(this==&rhs) return *this;

    GoodName::operator=(rhs);
    _grade=rhs._grade;
    return *this;
}

std::ostream & operator<<(std::ostream &out, const BetterName &n){
    out<<(GoodName)n<<"My grade is: "<<n._grade<<std::endl;
    return out;
}