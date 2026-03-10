#include "point.h"
#include "vector.h"
#include "linesegment.h"

namespace AsciiMan
{
	vector linesegment::getNormal()
	{
		return _normal;
	}

	linesegment::linesegment(point start, point end)
	{
		_start = start;
		_end = end;
		double x = _end.getX() - _start.getX();
		double y = _end.getY() - _start.getY();
		_normal.set(-y, x);
		_normal.normalize();
	}

	linesegment::~linesegment()
	{
	}
}