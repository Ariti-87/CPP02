#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}
Point::Point(Point const& pointCopy) : _x(pointCopy._x), _y(pointCopy._y)
{}

Point::Point(float const xValue, float const yValue) : _x(xValue), _y(yValue)
{}

Point::~Point()
{}

Point& Point::operator=(Point const& pointCopy)
{
	if (this != &pointCopy)
	{
		std::cout << "Copy cmpleted" << std::endl;
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return _x;
}

Fixed Point::getY(void) const
{
	return _y;
}
