#include <math.h>

#include "vector.h"


namespace AsciiMan
{
	inline void vector::calculateMagnitude()
	{		
		_magnitude = sqrt(_x * _x + _y * _y);
	}

	void vector::set(double x, double y)
	{
		_x = x;
		_y = y;
		calculateMagnitude();
		_isNormalized = false;
	}

	void vector::setX(double x)
	{
		_x = x;
		calculateMagnitude();
		_isNormalized = false;
	}

	void vector::setY(double y)
	{
		_y = y;
		calculateMagnitude();
		_isNormalized = false;
	}

	double vector::getX() const
	{
		return _x;
	}

	double vector::getY() const
	{
		return _y;
	}

	double vector::getMagnitude() const
	{
		return _magnitude;
	}

	void vector::normalize()
	{
		if (_isNormalized)
			return;

		if (_magnitude == 0)
			return;

		_x = _x / _magnitude;
		_y = _y / _magnitude;

		_magnitude = 1;
		_isNormalized = true;
	}

	vector vector::operator-(const vector& other)
	{
		vector subtract(_x - other.getX(), _y - other.getY());
		return subtract;
	}

	vector vector::operator+(const vector& other)
	{
		vector add(_x + other.getX(), _y + other.getY());
		return add;
	}

	vector::vector(double x, double y)
	{
		set(x, y);
	}

	vector::vector(point p)
	{
		set(p.x, p.y);
	}

	vector::vector()
	{
		_x = 0;
		_y = 0;
		_magnitude = 0;
		_isNormalized = false;
	}
}