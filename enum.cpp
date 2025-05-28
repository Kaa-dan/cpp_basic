#include <iostream>

enum Day
{
    sunday = 0,
    monday = 1
};
int main()
{
    Day today = sunday;
    /* enums = a user-defined data type that consists of paired named-integer constraints
      great if you have a set of potential options */
    switch (today)
    {
    case sunday:
        std::cout << "today is sunday";
        break;

    default:
        break;
    }
    return 0;
}