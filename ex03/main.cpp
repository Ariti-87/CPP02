#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(1.0, 1.0);
	Point b(5.0, 5.0);
	Point c(1.0, 5.0);
	Point pointIn(2.0, 3.0);

	if (bsp(a, b, c, pointIn))
		std::cout << "The pointIn is within the triangle" << std::endl;
	else
		std::cout << "The pointIn is not within the triangle" << std::endl;


	Point pointOut(7.0, 3.0);

	if (bsp(a, b, c, pointOut))
		std::cout << "The pointOut is within the triangle" << std::endl;
	else
		std::cout << "The pointOut is not within the triangle" << std::endl;

	Point pointEdge(1.0, 3.0);

	if (bsp(a, b, c, pointEdge))
		std::cout << "The pointEdge is within the triangle" << std::endl;
	else
		std::cout << "The pointEdge is not within the triangle" << std::endl;
}
