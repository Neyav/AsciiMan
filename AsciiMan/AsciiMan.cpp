// AsciiMan.cpp : Defines the entry point for the application.
//

#include "AsciiMan.h"
#include "Mathematics/point.h"
#include "Mathematics/vector.h"
#include "Mathematics/linesegment.h"

using namespace AsciiMan;

int main()
{
	vector v;
	linesegment testline(point(0, 0), point(0, 1));
	v = testline.getNormal();

	std::cout << "Line Normal: " << v.getX() << ", " << v.getY() << std::endl;
	return 0;
}
