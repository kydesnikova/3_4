#pragma once
#include "Struct.h"

class Parabola
{
public:
	Parabola(double a, double b, double c);
	~Parabola();
	Points GetcoordsOx();
	double GetFunction(double x);
	void MovingOy(double y);

private:
	double a, b, c;
};