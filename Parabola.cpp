#include "Parabola.h"
#include <math.h>

Parabola::Parabola(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;

}

Parabola::~Parabola()
{

}

Points Parabola::GetcoordsOx()
{
	Points p;

	p.point[0] = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	p.point[1] = (b + sqrt(b * b - 4 * a * c)) / (2 * a);
	return p;

}

double Parabola::GetFunction(double x)
{
	return a * pow(x, 2) + b * x + c;
}


void Parabola::MovingOy(double y)
{
	c += y;

}