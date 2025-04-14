#include <iostream>
#include <cmath>

int main()
{
    double x = 2;
    double y = 3;
    // double a = 4;
    double z;
    z = std::max(x, y);

    // we can use this here
    //  z = std::max(std::max(x, y), a);
    z = pow(2, 2);
    z = sqrt(9);
    z = abs(-4);
    z = round(3.6);
    z = ceil(6.1);
    z = floor(7.2);

    std::cout
        << z;
}