#pragma once

#include "point.h"
#include "vector.h"

namespace AsciiMan
{
	class linesegment
	{
	private:
		point _start;
		point _end;
		vector _normal;

	public:
		vector getNormal() const;
		point getStart() const;
		point getEnd() const;

		linesegment(point start, point end);
		~linesegment();
	};
}