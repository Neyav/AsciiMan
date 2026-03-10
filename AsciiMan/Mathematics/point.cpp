#include "point.h"

namespace AsciiMan
{

	double point::getX()
	{
		return x;
	}

	double point::getY()
	{
		return y;
	}

	void point::setX(double X)
	{
		x = X;
	}

	void point::setY(double Y)
	{
		y = Y;
	}

	point::point()
	{
		x = 0;
		y = 0;
	}
	point::~point()
	{

	}
}