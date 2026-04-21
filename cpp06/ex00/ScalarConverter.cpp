#include "ScalarConverter.hpp"
#include <cstdlib>

static void    printAllImpossible()
{
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: impossible\n";
    std::cout << "double: impossible\n";
}

static void    validNum(double num)
{
    std::string f = "None";
    if (num <= 31 || num == 127)
    {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
        return;
    }

    if (num > std::numeric_limits<int>::max())
        f = "+inf";
    else if (num < std::numeric_limits<int>::min())
        f = "-inf";
    if (f != "None")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << f << std::endl;
        std::cout << "double: " << num << ".0" << std::endl;
        return;
    }

    if (num > 127)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout <<  "int: " << num << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else
    {
        std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
        std::cout <<  "int: " << num << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }


}

static bool isPseudoLiteral(const std::string& s)
{
    return (s == "nan"  || s == "+inf"  || s == "-inf" ||
            s == "nanf" || s == "+inff" || s == "-inff");
}

static bool isFloatLiteral(const std::string& s)
{
    if (s.size() < 2 || s[s.size() - 1] != 'f')
        return false;

    errno = 0;
    char* endp = 0;
    std::strtof(s.c_str(), &endp);

    return (endp != s.c_str() && *endp && *(endp+1) == '\0' && errno != ERANGE);
}

static bool isDoubleLiteral(const std::string& s)
{
    if (!s.empty() && s[s.size() - 1] == 'f')
        return false;

    errno = 0;
    char* end = 0;
    std::strtod(s.c_str(), &end);

    return (end != s.c_str() && *end == '\0' && errno != ERANGE);
}

static void convertPseudoLiteral(const std::string &s)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if (s == "nan" || s == "nanf")
        std::cout << "float: nanf" << std::endl;
    else if (s == "+inf" || s == "+inff")
        std::cout << "float: +inff" << std::endl;
    else
        std::cout << "float: -inff" << std::endl;

    if (s == "nan" || s == "nanf")
        std::cout << "double: nan" << std::endl;
    else if (s == "+inf" || s == "+inff")
        std::cout << "double: +inf" << std::endl;
    else
        std::cout << "double: -inf" << std::endl;
}

static void    convertInteger(const std::string &literal)
{
    int base = 10;
    char *endp = 0;
    long num = std::strtol(literal.c_str(), &endp, base);
    if ((*endp != '\0' || errno == ERANGE) || (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()))
    {
        printAllImpossible();
        return;
    }
    validNum(num);

}

static void    converChar(const char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void     convertFloat(const std::string &s)
{
    char *endp = 0;
    float num = std::strtof(s.c_str(), &endp);
    validNum(num);
}

static void    convertDouble(const std::string &s)
{
    char *endp = 0;
    double num = std::strtod(s.c_str(), &endp);
    validNum(num);
}

void ScalarConverter::convert(const std::string &literal)
{
    if (isPseudoLiteral(literal))
        convertPseudoLiteral(literal);
    else if ((literal.size() == 1) && (!std::isdigit(literal[0])))
        converChar(literal[0]);
    else if (isFloatLiteral(literal))
        convertFloat(literal);
    else if (isDoubleLiteral(literal))
        convertDouble(literal);
    else if (std::isdigit(literal[0]))
        convertInteger(literal);
    else
        printAllImpossible();
}