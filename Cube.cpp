#include "Cube.h"
#include <math.h>

Cube::Cube(double d, double a, double b, double c) :Parabola(a, b, c)
{
    this->d = d;
}

Cube::~Cube()
{
}

double Cube::GetFunctionY(double x)
{
    return d * pow(x, 3) + Parabola::GetFunction(x);
}

double Cube::GetCoordOx(double l, double r, double e)
{
    double x, f;
    int i = 0;
    do {
        x = (l + r) / 2;
        f = Cube::GetFunctionY(x);
        if (f == 0) return x;
        else if (f > 0) l = x;
        else r = x;
        i++;
    } while (fabs(f) > e && i < 20000);
    return x;
}

void Cube::MovingOy(double y)
{
    return Parabola::MovingOy(y);
}