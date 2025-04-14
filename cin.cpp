#include <iostream>

int main()
{
    std::string name;
    int age;

    // cin will change the out put when using with getline because of
    std::cout << "What is your age ";

    std::cin >> age;

    std::cout << "what is your full  name ?";

    // std::getline(std::cin, name);
    // to avoid the /n buffer
    std::getline(std::cin >> std::ws, name);
    // std::cin >> name;

    // std::cout << "What is your age ";

    // std::cin >> age;

    std::cout << "your name is " << name << " you are " << age << " old ";
}