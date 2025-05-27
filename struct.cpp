#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{

    /* struct = A structure that group related variables under one name
    structs can contain many different data types (string,  int, double, bool, etc)
    vatriables in a struct are known as "members"
    members can be access with. "Class member access Operator"

    */

    student student1;
    student1.enrolled = true;
    student1.gpa = 2.2;
    student1.name = "Nithin raj s";

    std::cout << student1.name;
    return 0;
}