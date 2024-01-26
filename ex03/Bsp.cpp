#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

// Aire = 1/2 * base * hauteur
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float areaABC = std::abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0);
	float areaPBC = std::abs((point.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() * (c.getY().toFloat() - point.getY().toFloat())
		+ c.getX().toFloat() * (point.getY().toFloat() - b.getY().toFloat())) / 2.0);
	float areaPCA = std::abs((point.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - point.getY().toFloat())
		+ a.getX().toFloat() * (point.getY().toFloat() - c.getY().toFloat())) / 2.0);
	float areaPAB = std::abs((point.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())
		+ a.getX().toFloat() * (b.getY().toFloat() - point.getY().toFloat())
		+ b.getX().toFloat() * (point.getY().toFloat() - a.getY().toFloat())) / 2.0);
	if (areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
		return false;
	else
		return areaABC == areaPBC + areaPCA + areaPAB;
}
