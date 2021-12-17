#include<iostream>
#include "Building.hpp"
#include "Address.hpp"
#include "Lock.hpp"

int main(){
    {
        std::shared_ptr<Address> adr1;
        {
            std::unique_ptr<Building> bld1 = std::make_unique<Building>("Camin 22C","St. Aleea Studentilor");
            adr1 = bld1->getAddress();
            Lock lock1(adr1.get());
            Address adr2=*(adr1.get());
            adr1->visit();    
            std::cin.get();
            std::cout<<"Finish scope 1"<<std::endl;
        }
        Address adr3=*(adr1.get());
        adr3.visit();
        std::cin.get();
        std::cout<<"Finish scope 2"<<std::endl;
    }
    std::cin.get();
    std::cout<<"Finish main"<<std::endl;
    return 0;
}