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
		
		// Calculate the normal vector of the line segment assuming all lines are make start to
		// end in a clockwise fashion.

		point lineNormal = end - start;

		_normal.set(-lineNormal.getY(), lineNormal.getX());
		_normal.normalize();
	}

	linesegment::~linesegment()
	{
	}
}