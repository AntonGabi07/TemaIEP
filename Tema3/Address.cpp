#include<iostream>

#include "Address.hpp"

Address::Address(std::string address) : m_address(address){
    std::cout<<"Made an address: "+m_address+".\n";
}
Address::~Address(){
    std::cout<<"Destroyed an address: "+m_address<<".\n";
}
void Address::visit(){
    std::cout<<m_address + " is a nice place.\n";
}