#pragma once

#include "point.h"

namespace AsciiMan
{
	class vector : public point
	{
	private:
		double _magnitude;
		bool _isNormalized;

		inline void calculateMagnitude();
	public:

		void set(double x, double y);
		void setX(double x);
		void setY(double y);

		void normalize();

		vector operator-(const vector& other);
		vector operator+(const vector& other);

		vector(double x, double y);
		vector(point p);
		vector();
		~vector();
	};
}