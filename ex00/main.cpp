#include <iostream>
#include "Fixed.hpp"


int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << GREEN << "My test --------" << std::endl;
	c.setRawBits(12);
	std::cout << c.getRawBits() << std::endl;
	std::cout << "My test --------" << RESET << std::endl;

	return 0;
}
