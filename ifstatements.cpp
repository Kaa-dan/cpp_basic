#include <iostream>

int main()
{
    int age;

    std::cout << " Enter your age ";
    std::cin >> age;

    if (age >= 18)
        std::cout << " you are an adult ";
    else if (age < 0)
        std::cout << " you are not born yet ";
    else
        std::cout << " you are a minor ";
}