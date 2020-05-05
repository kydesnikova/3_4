﻿/*
Кубическая парабола. 
Разработать параметрический конструктор. 
Разработать методы: вывода на экран координаты точку пересечения кубической параблы с осью ОХ на заданном отрезке (использовать любой численный метод уточнения корня с заданной точностью); 
вывода значения функции при заданном х; перемещения параболы относительно оси OY.
*/

#include <iostream>
#include "Parabola.h"
#include "Cube.h"
int main()
{
    setlocale(LC_ALL, "RUS");

    Cube* Cb = new Cube(1, 2, 3, 4);
    printf("%f", Cb->GetCoordOx(-3, 4, 10000));

    Cb->GetFunctionY(4);
}