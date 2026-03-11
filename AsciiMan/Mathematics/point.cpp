#include "point.h"

namespace AsciiMan
{
	point point::operator-(const point& other) const
	{
		return point(x - other.x, y - other.y);
	}

	point point::operator+(const point& other) const
	{
		return point(x + other.x, y + other.y);
	}

	point::point(double X, double Y)
	{
		this->x = X;
		this->y = Y;
	}

	point::point()
	{
		x = 0;
		y = 0;
	}

}