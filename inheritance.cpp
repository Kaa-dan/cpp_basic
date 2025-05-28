#include <iostream>
class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "thi animal is eating";
    }
};

class Dog : public Animal
{
};
int main()
{
    /* inheritance  = a class can receive attributes and methods from another class
    children classes inherit from a parent class
    helps to reuse similar code found within multiple classes*/

    return 0;
}