#include <iostream>
void swap(std::string &x, std::string &y);
int main()
{
    std::string x = "koo";
    std::string y = "water";
    swap(x, y);

    std::cout << x << " " << y;
    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}