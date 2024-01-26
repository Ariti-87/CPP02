#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	// m_value = fixedCopy.getRawBits();
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
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
