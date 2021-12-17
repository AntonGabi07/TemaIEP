#include<iostream>

#include "Address.hpp"

int Address::locked = 1;

Address::Address(std::string address) : m_address(address){
    std::cout<<"Made an address: "+m_address+".\n";
}
Address::~Address(){
    std::cout<<"Destroyed an address: "+m_address<<".\n";
}
void Address::visit(){
    std::cout<<m_address + " is a nice place.\n";
}

void Address::lock(){
    locked=1;
}

void Address::unlock(){
    locked=0;
}

Address::Address(const Address &rhs){
    if(locked==1){
        std::cout<<"Sorry, this address is locked at the moment\n";
        m_address="";
    }else{
        m_address=rhs.m_address;
    }
}

Address& Address::operator=(const Address &rhs){
    if(this==&rhs) return *this;
    if(locked==1){
        std::cout<<"Sorry, this address is locked at the moment\n";
        return *this;
    }

    m_address=rhs.m_address;
    return *this;
}