#pragma once

#include "point.h"

namespace AsciiMan
{
	class vector : public point
	{
	private:
		double _magnitude;
		bool _isNormalized;
	public:

		void set(double x, double y);
		void setX(double x);
		void setY(double y);

		void normalize();

		vector(double x, double y);
		vector();
		~vector();
	};
}