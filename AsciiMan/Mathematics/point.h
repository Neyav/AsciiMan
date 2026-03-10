#pragma once

namespace AsciiMan
{ 
	class point
	{
	private:
		double _x;
		double _y;
	public:
		double getX() const;
		double getY() const;

		void set(double x, double y);
		void setX(double x);
		void setY(double y);

		point operator-(const point& other) const;
		point operator+(const point& other) const;

		point(double x, double y);
		point();
		~point();
	};

}