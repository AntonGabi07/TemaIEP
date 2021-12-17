#pragma once 

#include<iostream>

class Address{
    std::string m_address="";
public:
    Address(std::string address);
    ~Address();
    void visit();
};