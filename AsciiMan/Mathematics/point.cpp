#include "point.h"

namespace AsciiMan
{

	double point::getX() const
	{
		return _x;
	}

	double point::getY() const
	{
		return _y;
	}

	void point::set(double x, double y)
	{
		_x = x;
		_y = y;
	}
	
	void point::setX(double x)
	{
		_x = x;
	}

	void point::setY(double y)
	{
		_y = y;
	}

	point point::operator-(const point& other) const
	{
		return point(_x - other._x, _y - other._y);
	}

	point point::operator+(const point& other) const
	{
		return point(_x + other._x, _y + other._y);
	}

	point::point(double x, double y)
	{
		_x = x;
		_y = y;
	}

	point::point()
	{
		_x = 0;
		_y = 0;
	}
	point::~point()
	{

	}
}