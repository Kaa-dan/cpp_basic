#include <iostream>

int main()
{

    // sizeOf() = determines the size in bytes of a: variable , data type, class, objects etc
    double gpa = 2.5;
    std::cout << sizeof(gpa);

    char grade = 'F';
    char grades[] = {'A', 'F'};
    std::cout << sizeof(grades) / sizeof(grade) << " elements";
    return 0;
}