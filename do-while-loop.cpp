#include <iostream>

int main()
{

    int number = -1;
    do
    {
        std::cout << "Enter a positive number " << "\n";
        std::cin >> number;
    } while (number < 0);

    std::cout << "Entered number is " << number;
    return 0;
}