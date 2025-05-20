#include <iostream>

int main()
{

    for (int index = 0; index < 10; index++)
    {
        if (index == 3)
            continue;
        std::cout << index << std::endl;
        if (index == 5)
            break;
    }
    return 0;
}