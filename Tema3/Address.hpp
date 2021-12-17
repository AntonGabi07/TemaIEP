#pragma once 

#include<iostream>

class Address{
    std::string m_address="";
    static int locked;
public:
    Address(std::string address);
    ~Address();
    Address(const Address &rhs);
    Address& operator=(const Address &rhs);
    void visit();
    void lock();
    void unlock();
};