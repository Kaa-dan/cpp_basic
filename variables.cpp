#include <iostream>


int main (){
    
    int x ;
    x = 12 ;
    int y = 5;
    int sum = x+y;


    std::cout << x << '\n' ;
    std::cout << y << '\n' ;
    std::cout << "sum is " << sum << '\n';


    // integer (whole number)
    int age = 21;
    int days  = 7.5 ; // this will be trucated and take as whole number 7

    std::cout << days << std::endl;

    //doubel (number including decimal)
    double price = 1.99 ;

    std::cout << price << std::endl ;

    // char (single character)
    char grade = 'A' ;

    char intial = 'BC' ; // this will show the last character overflow 

    std::cout << intial << std::endl; 

    //bool (ture or false )

    bool student = false ;
    bool teacher = true;

    std::cout << student << teacher << std::endl;  //this will print 0 and 1 
    
    //string (objects tha represents a sequence of text )

    std::string name = "nithin";
    std::string age_of_nithin = "123";

    std::cout << name << age_of_nithin << std::endl ;
   
    return 0 ;
}