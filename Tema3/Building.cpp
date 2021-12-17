#include<iostream>
#include "Building.hpp"

Building::Building(std::string name,std::string address) : m_name(name) , m_address(std::make_shared<Address>(address)){
    std::cout<<"Created a building named " + m_name + "."<<std::endl;
}

Building::~Building(){
    std::cout<<"Destroyed the building " + m_name + "."<<std::endl;
}

std::shared_ptr<Address> Building::getAddress(){
    return m_address;
}