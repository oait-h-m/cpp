#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat joe("Bob", 1);
        std::cout << joe << std::endl;
        joe.incrementGrade();
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl; 
    }
    try
    {
        Bureaucrat ko("koyo", 150);
        std::cout << ko << std::endl;
        ko.decrementGrade();
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl; 
    }
}