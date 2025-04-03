#include <iostream>

// name space

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
int main()
{
    // using namespace std;

    /*Namespace = provides a solution for preventing name conflicts
    in large projects. Each entity needs a unique name. A namespace
    allows for identically named entities as long as the namespaces are
    different*/

    using std::cout;
    using std::string;
    using namespace first;

    int x = 0;

    std::cout << x << first::x << second::x << std::endl;
    return 0;
}