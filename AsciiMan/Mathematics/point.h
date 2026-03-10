#pragma once

namespace AsciiMan
{ 
	class point
	{
	private:
		double x;
		double y;
	public:
		double getX();
		double getY();

		void setX(double X);
		void setY(double Y);

		point();
		~point();
	};

}