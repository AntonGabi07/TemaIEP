// Problem: Get a vector of names, then order them alfabetically

#include<iostream>
#include "BadName.hpp"
#include "GoodName.hpp"
#include "BetterName.hpp"

#define NAME_NR 5

int main(){
	BetterName name("Mihai",10);
	std::cout<<name<<std::endl;

	GoodName gname("Ionut");
	gname=gname;
	std::cout<<gname<<std::endl;

	BadName bname("Marcel");
	bname=bname;
	std::cout<<bname;
	return 0;
}
