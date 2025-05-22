#include <iostream>
void printInfo(const std::string name,const int age);

int main()
{
    // const parameter = parameter that is effectively read only
    //                   code is more secrure & conveys intent
    //                   user for references and pointes

    std::string name = "nithin";
    int age = 21;
    printInfo(name, age);
    return 0;
}

void printInfo(const std::string name, const int age) // const will make it read only
{
    std::cout << name << '\n';
    std::cout << age << '\n';
}