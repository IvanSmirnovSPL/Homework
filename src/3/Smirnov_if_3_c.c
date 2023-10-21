#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Лабораторная  работа  №3
// по  теме: “Разветвляющиеся  вычислительные  процессы.
// Вычисление  значений  функций”
// 12 вариант, 3в задание

// определение в фигуре ли точка
// границы входят в фигуру

// функция принадлежности фигуре
bool inFigure(double x, double y)
{
    if (x >= 0 && x <= M_PI / 2 && y >= 0 && y <= sin(x))
        return true;
    return false;
}

void main()
{
    // считывание точки на плоскости
    double x, y;
    scanf("%lf %lf", &x, &y);

    // установление принадлежности точки фигуре
    printf("(%lf, %lf) %s figure", x, y, inFigure(x, y) ? "in" : "not in");
}