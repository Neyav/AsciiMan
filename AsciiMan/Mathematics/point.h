#pragma once

namespace AsciiMan
{ 
	class point
	{
	private:
		double _x;
		double _y;
	public:
		double getX();
		double getY();

		void set(double x, double y);
		void setX(double x);
		void setY(double y);

		point();
		~point();
	};

}