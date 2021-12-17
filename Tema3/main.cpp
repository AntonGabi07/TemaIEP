#include<iostream>
#include "Building.hpp"
#include "Address.hpp"

int main(){
    {
        std::shared_ptr<Address> adr1;
        {
            std::unique_ptr<Building> bld1 = std::make_unique<Building>("Camin 22C","St. Aleea Studentilor");
            adr1 = bld1->getAddress();
            adr1->visit();
        }
        std::cin.get();
        std::cout<<"Finish scope 2"<<std::endl;
    }
    std::cin.get();
    std::cout<<"Finish main"<<std::endl;
    return 0;
}