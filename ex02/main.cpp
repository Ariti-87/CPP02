#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << GREEN << "My test ------- " << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	Fixed x(10.5f);
	Fixed x2(10.5f);
	Fixed x3(10.5f);
	Fixed y(20);
	Fixed z(2);
	std::cout << x << std::endl;
	std::cout << x-- << std::endl;
	std::cout << x << std::endl;
	std::cout << --x << std::endl;
	std::cout << x << std::endl;
	if (x3 == x2)
		std::cout << "x3 is equal to x2" << std::endl;
	if (x != y)
		std::cout << "x is not equal to y" << std::endl;
	if (x < y)
		std::cout << "x is less than y" << std::endl;
	if (x <= y)
		std::cout << "x is less than or equal to y" << std::endl;
	if (x > z)
		std::cout << "x is greater than z" << std::endl;
	if (x >= z)
		std::cout << "x is greater than or equal to z" << std::endl;
	Fixed div = y / z;
	std::cout << "y / z = " << div << std::endl;
	Fixed sub = y - z;
	std::cout << "y - z = " << sub << std::endl;
	Fixed add = y + z;
	std::cout << "y + z = " << add << std::endl;
	Fixed mult = y * z;
	std::cout << "y * z = " << mult << std::endl;
	std::cout << "My test ------- " << RESET << std::endl;
	return 0;
}
