#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Please enter 2 argument\n";
        return 1;
    }
    ScalarConverter::convert(av[1]);
}