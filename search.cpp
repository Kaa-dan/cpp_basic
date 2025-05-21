#include <iostream>
int searchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index;
    int myNum;

    std::cout << "Enter element to search for: \n";
    std::cin >> myNum;

    index = searchArray(numbers, sizeof(numbers) / sizeof(numbers[0]), myNum);

    std::cout << " the number " << numbers[index] << " is on index " << index << std::endl;
    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == array[i])
            return i;
    }
    return -1;
}