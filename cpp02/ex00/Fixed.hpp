#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
private:
	int	fixedPoint;
	static const int	fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &Obj);
	Fixed	&operator=(const Fixed &other);
	~Fixed();

	int getRawBits( void ) const;
	void	setRawBits(int const raw);
};

#endif
