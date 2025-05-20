#include <iostream>

int main()
{

    // pseudo-random = not truly random (but close)
    srand(time(NULL));

    int num = rand();
    num = (rand() % 6) + 1; // this will give the number between 1 to 6
    std::cout << num;

    // general formula

    /*If you want a number between min and max (inclusive), use:
        num = (rand() % (max - min + 1)) + min;
        
        eg: num = (rand() % (15 - 5 + 1)) + 5;
// => (rand() % 11) + 5
*/

    return 0;
}