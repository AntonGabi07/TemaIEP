#pragma once
#include "Address.hpp"
#include<memory>


class Building{
    std::shared_ptr<Address> m_address;
    std::string m_name;

public:

    Building(std::string name,std::string address);
    ~Building();
    std::shared_ptr<Address> getAddress();
};