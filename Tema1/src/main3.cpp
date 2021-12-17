#include<iostream>
#include<myString3.hpp>

int main()
{
    String string1("Hello World!");
    String string2 = string1;
 
    std::cout<<"First string -> "<<string1<<"\n";   
    std::cout<<"Second string -> "<<string2<<"\n";

    string2.setString("Bye World!");

    std::cout<<"First string -> "<<string1<<"\n";   
    std::cout<<"Second string -> "<<string2<<"\n";

    return 0;
}