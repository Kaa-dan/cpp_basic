#include <iostream>

int main()
{
    // Null value = a special value that means something has no value when a pointer is holding a null value that  pointer is not pointing at anything

    //  null ptr = keyword represents a null pinter leteral

    // nullptrs are helpful when determining if an address was succesfully assigned to a pointer

    // when using pointer, be careful that your code isn't
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    if (pointer == nullptr)
        std::cout << " address is not assigned \n";
    else
        std::cout << " address was assigned \n ";
    return 0;
}