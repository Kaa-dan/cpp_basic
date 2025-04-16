#include <iostream>

int main()
{
    int a, b;
    char opr;
    std::cout << "Enter the first vlaue ";
    std::cin >> a;
    std::cout << "Enter + for addition * for multiplication ";
    std::cin >> opr;
    std::cout << "Enter the second value ";
    std::cin >> b;

    switch (opr)
    {
    case '*':
        std::cout << "mulply is " << a * b;
        break;
    case '+':
        std::cout << "Sum is " << a + b;
        break;
    default:
        break;
    }
}