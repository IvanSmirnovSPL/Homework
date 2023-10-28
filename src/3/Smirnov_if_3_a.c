#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Лабораторная  работа  №3
// по  теме: “Разветвляющиеся  вычислительные  процессы.
// Вычисление  значений  функций”
// 12 вариант, 3а задание

// определение в фигуре ли точка
// границы входят в фигуру

int main()
{
    // считывание точки на плоскости
    double x, y;
    scanf_s("%lf %lf", &x, &y);

    // установление принадлежности точки фигуре
    bool res;
    if (x * x + y * y <= 25 && x <= 0)
    {
        if (x < 0 && x > -2 && y < x + 2 && y > 0)
            res = false;
        else  
            res = true;
    }
    else
        res = false;
    printf("(%lf, %lf) %s figure", x, y, res ? "in" : "not in");
}