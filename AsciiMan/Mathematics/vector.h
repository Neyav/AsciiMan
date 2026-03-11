#pragma once

#include "point.h"

namespace AsciiMan
{
	class vector
	{
	private:

		double _x;
		double _y;

		double _magnitude;
		bool _isNormalized;

		inline void calculateMagnitude();
	public:

		void set(double x, double y);
		void setX(double x);
		void setY(double y);

		double getX() const;
		double getY() const;
		double getMagnitude() const;

		void normalize();

		vector operator-(const vector& other);
		vector operator+(const vector& other);

		vector(double x, double y);
		vector(point p);
		vector();
	};
}