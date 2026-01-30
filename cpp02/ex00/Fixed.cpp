#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &Other)
{
	if (this != &Other)
	{
		this->fixedPoint = Other.getRawBits();
	}
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}
