
#include <iostream>
#include<memory>
#include "Lock.hpp"

Lock::Lock(Address *adr): m_adr(adr){
    std::cout<<"Made a lock\n";
    m_adr->lock();
}

Lock::~Lock(){
    m_adr->unlock();
}