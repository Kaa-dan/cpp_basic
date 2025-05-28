#include <iostream>
class Student
{
public:
    std::string name;
    int age;
    bool status;
    Student(std::string name, int x)
    {
        this->name = name;
        age = x;
    };
    Student(std::string name, int x, bool y)
    {
        this->name = name;
        age = x;
        status = y;
    }
};
int main()
{

    /*constructor = special method that is automatically called when an object is instantiated useful
    for assigning values to attributes as arguments*/

    /* overloaded constructors  = multiple constructors w/ same name but different parameters
    allows for varying arguments when instantiating an object*/

    Student student1("nithin", 11);
    Student student2("ied", 12, false);
    return 0;
}