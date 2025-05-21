#include <iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << "enter the food \n";
        std::getline(std::cin, foods[i]);
    }

    std::cout << " these are the foods \n";
    for (std::string val : foods)
    {
        std::cout << val << "\n";
    }
    return 0;
}