#include <iostream>

int main(){
    std::string name ;

    std::cout << "enter your name" ;

    std::getline(std::cin,name) ;
    bool len = name.empty() ; // this will return a boolean value 
    // name.clear() this wil clear the value
    name.append("@gmail.com");
    name.at(0); //with return the index character 
    name.insert(0,"@"); // it will insert the value at the given position
    //name.erase() to erase a portion 
    //name.find(" ") find the given value
    std::cout << name.length() ;
}