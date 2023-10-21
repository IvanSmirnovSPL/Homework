#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Лабораторная  работа  №3
// по  теме: “Разветвляющиеся  вычислительные  процессы.
// Вычисление  значений  функций”
// 12 вариант, 3б задание

// определение в фигуре ли точка
// границы входят в фигуру

// функция принадлежности фигуре
bool inFigure(double x, double y)
{
    if (x <= 0)
    {
        if (x >= -2 && y <= 0 && y >= - x - 2)
            return true;
        return false;
    }
    else
    {
        if (x <= 2 && y <= - x * x && y >= - x - 2)
            return true;
        return false;
    }
}

void main()
{
    // считывание точки на плоскости
    double x, y;
    scanf("%lf %lf", &x, &y);

    // установление принадлежности точки фигуре
    printf("(%lf, %lf) %s figure", x, y, inFigure(x, y) ? "in" : "not in");
}