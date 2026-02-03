#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPoint;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &other);
	~Fixed();

	int	getRawBits(void) const;
        void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;

	Fixed	&operator=(const Fixed &obj);
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &n1, Fixed &n2);
	static Fixed		&max(Fixed &n1, Fixed &n2);
	static const Fixed	&min(const Fixed &n1, const Fixed &n2);
	static const Fixed	&max(const Fixed &n1, const Fixed &n2);

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
