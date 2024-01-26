#ifndef DEF_POINT
#define DEF_POINT

#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:

	Point();
	Point(Point const& pointCopy);
	Point(float const xValue, float const yValue);
	~Point();
	Point& operator=(Point const& pointCopy);
	Fixed getX(void) const;
	Fixed getY(void) const;

	private:

	Fixed const _x;
	Fixed const _y;
};

#endif

