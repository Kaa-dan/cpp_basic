#include <iostream>

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
    return 0;
}