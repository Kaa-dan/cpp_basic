#include <iostream>

class Stove
{
public:
    int getTemparature()
    {
        return temparature;
    }
    void setTemparature(int temparature)
    {
        this->temparature = temparature;
    }

private:
    int temparature;
};
int main()
{

    // abstration = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE
   
    return 0;
}