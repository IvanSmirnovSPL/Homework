#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Лабораторная  работа  №5
// по  теме: “Циклические процессы”
// 12 вариант, 1 задание

// вывод значений функции в заданных точках
// !в задании неточность, неясно к какому интервалу отнести точку PI!

// кусочная функция из условия
double f(double x)
{
    if (x < M_PI / 2)
        return 2 * sin(x);
    if (x >= M_PI / 2 && x < M_PI)
        return (x / 2) * cos(2 * x);
    if (x >= M_PI)
        return sin(x) + cos(x);
}

void main()
{
    // переменная порядка погрешности double
    const double eps = 1e-15;

    // вывод через for
    printf("Через for: \n\n");
    for (double x = 0; x <= 2 * M_PI + eps; x += M_PI / 6) printf("f(%lf) = %lf\n", x, f(x));

    // вывод через while
    printf("\nЧерез while: \n\n");
    double x = 0;
    while (x <= 2 * M_PI + eps)
    {
        printf("f(%lf) = %lf\n", x, f(x));
        x += M_PI / 6;
    }

    // вывод через do while
    printf("\nЧерез do while: \n\n");
    x = 0;
    do
    {
        printf("f(%lf) = %lf\n", x, f(x));
        x += M_PI / 6;
    }while (x <= 2 * M_PI + eps);
}