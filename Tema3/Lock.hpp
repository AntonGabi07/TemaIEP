#pragma once

#include<iostream>
#include<memory>
#include "Address.hpp"

class Lock{
    Address *m_adr;
public:
    explicit Lock(Address *adr);

    ~Lock();
};