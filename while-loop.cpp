#include <iostream>

int main()
{
    std::string name;
    // if(name.empty()){
    //     std::cout << "Enter your name" ;
    //     std::getline(std::cin,name);
    // };

    while (name.empty())
    {
        std::cout << "Enter your name";
        std::getline(std::cin, name);
    };
    std::cout << "hello " << name;

    return 0;
}