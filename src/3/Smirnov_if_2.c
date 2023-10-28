#include <stdio.h>
#include <math.h>

// Лабораторная  работа  №3
// по  теме: “Разветвляющиеся  вычислительные  процессы.
// Вычисление  значений  функций”
// 12 вариант, 2 задание

// решение квадратного уравнения ax^2 + bx + c = 0

int main()
{
    // считываем коэффициенты (x, y, z из условия) 
    double a, b, c;
    scanf_s("%lf %lf %lf", &a, &c, &b);
    
    // сортируем их из условий:
    // a >= c >= b
    if (c < b)
    {
        double tmp = c;
        c = b;
        b = tmp;
    }
    if (a < c)
    {
        double tmp = c;
        c = a;
        a = tmp;
    }
    if (c < b)
    {
        double tmp = c;
        c = b;
        b = tmp;
    }

    // если уравнение линейное
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                // все коэфициенты 0 -> x - любое число
                printf("Solution is R");
                return 0;
            }  
            else
            {
                // 0*x = -c -> нет решения
                printf("No solution in R");
                return 0; 
            }
                 
        }
        else
        {
            // b*x + c = 0 -> x = - c / b
            printf("%lf", - c / b);
        }
        return 0;
    }

    // расчёт дискриминанта
    double D = b*b - 4 * a * c;

    if (D < 0)
    {
        // отрицатеьный дискриминант -> решение в комплексных чслах
        printf("No solution in R");
        return 0;
    }
    else
    {
        if (D == 0)
        {
            // D = 0 -> один корень x = - b / (2 * a)
            printf("%lf", - b / 2 / a);
            return 0;
        }
        else
        {
            // два корня, x = (-b +- sqrt(D)) / (2 * a)
            printf("%lf %lf", (- b + sqrt(D)) / (2 * a), (- b - sqrt(D)) / (2 * a));
            return 0;
        }
    }
    
}