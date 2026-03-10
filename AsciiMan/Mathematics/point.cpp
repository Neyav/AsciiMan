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

	point::point()
	{
		x = 0;
		y = 0;
	}
	point::~point()
	{

	}
}