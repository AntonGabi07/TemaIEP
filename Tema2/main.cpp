// Problem: Get a vector of names, then order them alfabetically

#include<iostream>
#include "BadName.hpp"
#include "GoodName.hpp"

#define NAME_NR 5

int main(){
	GoodName gname("Ionut");
	gname=gname;
	std::cout<<gname;
	BadName bname("Marcel");
	bname=bname;
	std::cout<<bname;
	return 0;
}
