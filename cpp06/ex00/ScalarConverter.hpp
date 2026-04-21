#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cerrno>
#include<limits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
    public:
        static void convert(const std::string &literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();
};

#endif
