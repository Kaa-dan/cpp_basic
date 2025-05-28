#include <iostream>

class Human
{
public:
    std::string name;
    int age;
    void eat()
    {
        std::cout << " this person is eating \n";
    }
};

int main()
{
    /*
    object  = A collection of attributes and methods they can have
    characteristics and could perform actions
    can be used to mimic real world items
    created from a class which act as a "blue-print"*/

    Human human1;
    human1.age = 21;
    human1.name = "Nithin";
    human1.eat();

    return 0;
}