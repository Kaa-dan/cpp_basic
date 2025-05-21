#include <iostream>

int main()
{

    // fill() = fills a range of elements with a specified value fill (begin, end, value)

    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + SIZE, "nithin"); // we can fill half and full according to our wish using fill

    for (std::string val : foods)
    {
        std::cout << val << '\n';
    }

    return 0;
}