#include <iostream>

int main()
{
    /*type conversion = conversion a value of one data type to another
                            implicit = automatic
                            explicit = precede value with new data type (int)*/

    int x = 2.5;
    std::cout << x << std::endl;

    double b = (int)3.15;

    char z = 100; // this will show the asci value

    double c = (double)5;
    std::cout << b << " hey  " << z << (char)100 << std::endl
              << c << std::endl;

    int correct = 8;
    int question = 10;

    double score = correct/question *100 ; // here i will get 0 its becuas am using int

    score = correct/(double) question *100; // this will show the correct output

    std::cout << correct / question << "%";
}