#include <iostream>
class Student
{
public:
    std::string name;
    int age;

    Student(std::string name, int x)
    {
        this->name = name;
        age = x;
    }
};
int main()
{

    /*constructor = special method that is automatically called when an object is instantiated useful
    for assigning values to attributes as arguments*/
    Student student1("nithin", 11);
    return 0;
}