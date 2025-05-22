#include <iostream>

int main()
{
    // pointer  = variable that stores a memory address of another variable
    //            some times it's easier to work with an address

    // & address-of operator
    // * derefernce operator

    std::string name = "nithin";
    std::string *pName = &name; // this will contain a memory address
    std::string freePizzas[] = {"Md", "Dm"};
    std::string *pFreePizzas = freePizzas; // here i don't want to use the & operator becuase freepizzars is already an address

    std::cout << *pFreePizzas << std::endl
              << pFreePizzas << std::endl;
    std::cout << name << "  " << pName << std::endl;

    std::cout << *pName << std::endl; // here i will get he value withour dereference i will get the memory address
    return 0;
}