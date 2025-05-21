#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    std::string students[] = {"nithin", "abhirami"};
    // for looop
    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }

    // for each loop

    int grades[] = {40, 50, 60};

    for (int grade : grades)
    {
        std::cout << grade << std::endl;
    }

    // passing function

    double prices[] = {1.2, 21.2, 2.2};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "total is " << total << std::endl;
    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}