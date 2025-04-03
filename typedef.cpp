#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> parilist_t;
typedef std::string text_t;
using int_t = int;
int main()
{
    // parilist_t parilist;

    /*typedef = reserved keyword used to create an additional name (alias) for another data type. New identifier for an existing type helps with readability and reduces types.
    use when there is a clear benefit replaced with 'using' (work better w/ templates)*/
    using std::cout;
    int_t age = 21;

    text_t first_name = "nithinr";

    cout << first_name << " is " << age << " years old";
    return 0;
}