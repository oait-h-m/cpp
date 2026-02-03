#include "Fixed.hpp"

int main()
{
	Fixed	one(1);
	Fixed res = one++;
	std::cout << "one = " << one << std::endl;
	std::cout << "res = " << res << std::endl;
}
