#ifndef DEF_FIXED
#define DEF_FIXED

#include <iostream>

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define VIOLET "\033[35m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define BLACK "\033[30m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

class Fixed
{
	public:

	Fixed();
	Fixed(Fixed const& fixedCopy);
	~Fixed();
	Fixed& operator=(Fixed const& fixedCopy);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	private:

	int _value;
	static const int _bits = 8;
};

#endif
