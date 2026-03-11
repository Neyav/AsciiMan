#pragma once

namespace AsciiMan
{ 
	class point
	{
	public:
		double x;
		double y;
	
		point operator-(const point& other) const;
		point operator+(const point& other) const;

		point(double X, double Y);
		point();
	};

}