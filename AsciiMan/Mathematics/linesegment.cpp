#include "point.h"
#include "vector.h"
#include "linesegment.h"
#include <stdexcept>

namespace AsciiMan
{
	bool linesegment::isPointOnSegment(point p) const
	{
		// Check if the point is within the bounding box of the line segment
		if (p.x < std::min(_start.x, _end.x) || p.x > std::max(_start.x, _end.x) ||
			p.y < std::min(_start.y, _end.y) || p.y > std::max(_start.y, _end.y))
		{
			return false;
		}
		// Check if the point is collinear with the line segment
		double crossProduct = (_end.y - _start.y) * (p.x - _start.x) - (_end.x - _start.x) * (p.y - _start.y);
		return std::abs(crossProduct) < 1e-10; // Allow for floating-point precision issues
	}

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