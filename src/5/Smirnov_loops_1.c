#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Лабораторная  работа  №5
// по  теме: “Циклические процессы”
// 12 вариант, 1 задание

// вывод значений функции в заданных точках
// !в задании неточность, неясно к какому интервалу отнести точку PI!

int main()
{
    // переменная порядка погрешности double
    const double eps = 1e-15;

    // вывод через for
    printf("Через for: \n\n");
    
    for (double x = 0; x <= 2 * M_PI + eps; x += M_PI / 6)
    {
        double res;
        if (x < M_PI / 2)
            res = 2 * sin(x);
        if (x >= M_PI / 2 && x < M_PI)
            res = (x / 2) * cos(2 * x);
        if (x >= M_PI)
            res = sin(x) + cos(x);
        printf("f(%lf) = %lf\n", x, res);
    }

    // вывод через while
    printf("\nЧерез while: \n\n");
    double x = 0;
    while (x <= 2 * M_PI + eps)
    {
        double res;
        if (x < M_PI / 2)
            res = 2 * sin(x);
        if (x >= M_PI / 2 && x < M_PI)
            res = (x / 2) * cos(2 * x);
        if (x >= M_PI)
            res = sin(x) + cos(x);
        printf("f(%lf) = %lf\n", x, res);
        x += M_PI / 6;
    }

    // вывод через do while
    printf("\nЧерез do while: \n\n");
    x = 0;
    do
    {
        double res;
        if (x < M_PI / 2)
            res = 2 * sin(x);
        if (x >= M_PI / 2 && x < M_PI)
            res = (x / 2) * cos(2 * x);
        if (x >= M_PI)
            res = sin(x) + cos(x);
        printf("f(%lf) = %lf\n", x, res);
        x += M_PI / 6;
    }while (x <= 2 * M_PI + eps);
}