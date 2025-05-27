#include <iostream>

template <typename T> // template parameter declaration

// template <typename T, typename U>this will make to accept 2 different types of data type


//here put auto keyword if compiler will automatically check the return value 
T max(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    /* function template = describes what a function looks like.ab
    can be used to generate as many overloaded functions as needed,
    each using different data types
    */

    return 0;
}