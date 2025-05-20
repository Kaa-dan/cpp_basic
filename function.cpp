#include <iostream>

int indianScammer(std::string name);
int main()
{

    // function = a block of reusable code
    std::string name = " nithin raj s";
    int val = indianScammer(name);

    std::cout << val;
    return 0;
}

int indianScammer(std::string name)
{
    std::cout << "Sir this is json from microsoft" << name << std::endl;
    std::cout << "Sar OTP";
    return 3;
};