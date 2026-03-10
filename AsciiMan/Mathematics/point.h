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

		point();
		~point();
	};

}