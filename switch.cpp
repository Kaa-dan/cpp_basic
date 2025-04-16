#include <iostream>

int main()
{

    int month;
    std::cout << " Enter the month(1-12) ";
    std::cin >> month;
    switch (month)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "february";
        break;
    default:
        break;
    }
}