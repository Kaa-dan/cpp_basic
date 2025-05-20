#include <iostream>

int main()
{

    std::string car[] = {"Ford"};
    std::cout << car;// this will show the memory address not the value 

    std::string cars[2] ;
    cars[0] = "vadai poche";
    return 0;
}