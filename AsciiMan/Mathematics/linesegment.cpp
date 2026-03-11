#include "point.h"
#include "vector.h"
#include "linesegment.h"
#include <iostream>

namespace AsciiMan
{
	vector linesegment::getNormal() const
	{
		return _normal;
	}

	point linesegment::getStart() const
	{
		return _start;
	}

	point linesegment::getEnd() const
	{
		return _end;
	}

	linesegment::linesegment(point start, point end)
	{
		_start = start;
		_end = end;
		
        // Calculate the normal vector of the line segment assuming all lines are made
        // start -> end in a clockwise fashion. For a segment vector (dx, dy) the
        // outward normal (rotated 90 degrees clockwise) is (dy, -dx).

        point lineNormal = end - start;

        _normal.set(lineNormal.y, -lineNormal.x);
        _normal.normalize();
	}

	linesegment::~linesegment()
	{
	}
}