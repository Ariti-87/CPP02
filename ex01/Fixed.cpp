#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& fixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixedCopy)
		_value = fixedCopy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)_value / (float)(1 << _bits);
}

int Fixed::toInt( void ) const
{
	return _value >> _bits;
}

std::ostream &operator<<(std::ostream &str, Fixed const& fixedNumber)
{
	str << fixedNumber.toFloat();
	return str;
}

