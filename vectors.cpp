#include <iostream>

#include <vector>

int main()
{
    std::vector<int> myVec;
    myVec = {1, 2, 3, 4};
    for (int i : myVec)
    {
        std::cout << i;
    }
    return 0;
}