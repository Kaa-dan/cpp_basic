#include <iostream>

void indianScammer(std::string name);
int main()
{

    // function = a block of reusable code
    std::string name = " nithin raj s";
    indianScammer(name);
    return 0;
}

void indianScammer(std::string name)
{
    std::cout << "Sir this is json from microsoft" << name << std::endl;
    std::cout << "Sar OTP";
};