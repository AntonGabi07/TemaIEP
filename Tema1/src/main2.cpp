#include<iostream>
#include<myString2.hpp>

int main()
{
    String string1("Hello World!");
    String string2 = string1;
    String string3=*(new String("asignment"));

    std::cout<<"First string -> "<<string1<<"\n";   
    std::cout<<"Second string -> "<<string2<<"\n";
    std::cout<<"Third string -> "<<string3<<"\n";

    string2.setString("Bye World!");

    std::cout<<"First string -> "<<string1<<"\n";   
    std::cout<<"Second string -> "<<string2<<"\n";

    return 0;
}