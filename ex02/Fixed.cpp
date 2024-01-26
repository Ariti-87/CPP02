#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0)
{}

Fixed::Fixed(int const value) : _value(value << _bits)
{}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << _bits)))
{}

Fixed::Fixed(Fixed const& fixedCopy)
{
	*this = fixedCopy;
}

Fixed::~Fixed()
{}

Fixed& Fixed::operator=(Fixed const& fixedCopy)
{
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

// Comparison operators
bool Fixed::operator>(Fixed const& fixedNumber)  const
{
	return (_value > fixedNumber._value);
}

bool Fixed::operator<(Fixed const& fixedNumber) const
{
	return (_value < fixedNumber._value);
}

bool Fixed::operator>=(Fixed const& fixedNumber) const
{
	return (_value >= fixedNumber._value);
}

bool Fixed::operator<=(Fixed const& fixedNumber) const
{
	return (_value <= fixedNumber._value);
}

bool Fixed::operator==(Fixed const& fixedNumber) const
{
	// return (this->toFloat() == fixedNumber.toFloat());
	return (_value == fixedNumber._value);
}

bool Fixed::operator!=(Fixed const& fixedNumber) const
{
	return (_value != fixedNumber._value);
}

// Arithmetic Fixed::operators
Fixed Fixed::operator+(Fixed const& fixedNumber) const
{
	return (this->toFloat() + fixedNumber.toFloat());
}

Fixed Fixed::operator-(Fixed const& fixedNumber) const
{
	return (this->toFloat() - fixedNumber.toFloat());
}

Fixed Fixed::operator*(Fixed const& fixedNumber) const
{
	return (this->toFloat() * fixedNumber.toFloat());
}

Fixed Fixed::operator/(Fixed const& fixedNumber) const
{
	return (this->toFloat() / fixedNumber.toFloat());
}


// Increment/decrement
Fixed Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++_value;
	return tmp;
}

Fixed Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--_value;
	return tmp;
}

// Min/Max
	Fixed &Fixed::min(Fixed &a, Fixed &b)
	{
		if (a < b)
			return a;
		return b;
	}

	Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
	{
		if (a < b)
			return a;
		return b;
	}

	Fixed &Fixed::max(Fixed &a, Fixed &b)
	{
		return (a > b) ? a : b;
	}

	Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
	{
		return (a > b) ? a : b;
	}

// Insertion operators
std::ostream &operator<<(std::ostream &str, Fixed const& fixedNumber)
{
	str << fixedNumber.toFloat();
	return str;
}
