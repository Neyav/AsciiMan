#include <math.h>

#include "vector.h"


namespace AsciiMan
{
	void vector::set(double x, double y)
	{
		point::set(x, y);
		_magnitude = sqrt(x * x + y * y);
		_isNormalized = false;
	}

	void vector::setX(double x)
	{
		point::setX(x);
		_magnitude = sqrt(x * x + point::getY() * point::getY());
		_isNormalized = false;
	}

	void vector::setY(double y)
	{
		point::setY(y);
		_magnitude = sqrt(point::getX() * point::getX() + y * y);
		_isNormalized = false;
	}

	void vector::normalize()
	{
		if (_isNormalized)
			return;
		if (_magnitude == 0)
			return;

		double x = point::getX();
		double y = point::getY();

		point::set(x / _magnitude, y / _magnitude);
		_magnitude = 1;
		_isNormalized = true;
	}

	vector::vector(double x, double y)
	{
		set(x, y);
	}

	vector::vector()
	{
		_magnitude = 0;
		_isNormalized = false;
	}
	vector::~vector()
	{
	}
}