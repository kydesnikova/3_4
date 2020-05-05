#pragma once
#include "Parabola.h"
class Cube :public Parabola
{
public:
	Cube(double d, double a, double b, double c);
	~Cube();
	double GetFunctionY(double d);
	double GetCoordOx(double l, double r, double e);
	void MovingOy(double y);
private:
	double d;
};