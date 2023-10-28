#include <stdio.h>

// Лабораторная  работа  №4
// по  теме: “Разветвляющиеся процессы.
// Оператор switch”
// 12 вариант, 1 задание

// строительная фирма, подсчёт количества клиентов

// 1 Снятие обоев - 2000
// 2 Выравнивание стен - 5000
// 3 Установка натяжного потолка - 15000
// 4 Монтаж кровли - 35000
// 5 Возведение фундамента- 70000
// 6 Кирпичная кладка - 45500

int main()
{
    // зануляем счётчики клиентов
    int countTotal = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;

    // инициализация переменных для поиска 2 самых популярных услуг
    int pop1_val = 0, pop2_val = 0, pop1 = 1, pop2 = 2; 

    // вывод цен на цслуги
    printf("Услуга %i: %s, цена: %i\n", 1, "Снятие обоев", 2000);
    printf("Услуга %i: %s, цена: %i\n", 2, "Выравнивание стен", 5000);
    printf("Услуга %i: %s, цена: %i\n", 3, "Установка натяжного потолка", 15000);
    printf("Услуга %i: %s, цена: %i\n", 4, "Монтаж кровли", 35000);
    printf("Услуга %i: %s, цена: %i\n", 5, "Возведение фундамента", 70000);
    printf("Услуга %i: %s, цена: %i\n", 6, "Кирпичная кладка", 45500);

    // выход из цмкла по goto, если введён некоректный код услуги, например 0
    while (1 > 0) // True
    {
        // считываем услугу от клиента
        int n;
        scanf_s("%i", &n);

        switch (n)
        {
        case 1:
            ++countTotal;
            ++count_1;
            // обновление  данных о популярных услугах
            if (count_1 > pop1_val)
            {
                if (pop1 != 1)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_1;
                pop1 = 1;
            }
            else if (count_1 > pop2_val)
            {
                pop2_val = count_1;
                pop2 = 1;
            }
            break;
        case 2:
            ++countTotal;
            ++count_2;
            if (count_2 > pop1_val)
            {
                if (pop1 != 2)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_2;
                pop1 = 2;
            }
            else if (count_2 > pop2_val)
            {
                pop2_val = count_2;
                pop2 = 2;
            }
            break;
        case 3:
            ++countTotal;
            ++count_3;
            if (count_3 > pop1_val)
            {
                if (pop1 != 3)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_3;
                pop1 = 3;
            }
            else if (count_3 > pop2_val)
            {
                pop2_val = count_3;
                pop2 = 3;
            }
            break;
        case 4:
            ++countTotal;
            ++count_4;
            if (count_4 > pop1_val)
            {
                if (pop1 != 4)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_4;
                pop1 = 4;
            }
            else if (count_4 > pop2_val)
            {
                pop2_val = count_4;
                pop2 = 4;
            }
            break;
        case 5:
            ++countTotal;
            ++count_5;
            if (count_5 > pop1_val)
            {
                if (pop1 != 5)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_5;
                pop1 = 5;
            }
            else if (count_5 > pop2_val)
            {
                pop2_val = count_5;
                pop2 = 5;
            }
            break;
        case 6:
            ++countTotal;
            ++count_6;
            if (count_6 > pop1_val)
            {
                if (pop1 != 6)
                {
                    pop2_val = pop1_val;
                    pop2 = pop1;
                }
                pop1_val = count_6;
                pop1 = 6;
            }
            else if (count_6 > pop2_val)
            {
                pop2_val = count_6;
                pop2 = 6;
            }
            break;
        default:
            goto stop;
        }
    }
    stop:;
    // вывод результатов
    printf("Всего клиентов: %i\n", countTotal);
    printf("Клиентов по 1 услуге: %i, сумма по услуге %i\n", count_1, count_1 * 2000);
    printf("Клиентов по 2 услуге: %i, сумма по услуге %i\n", count_2, count_2 * 5000);
    printf("Клиентов по 3 услуге: %i, сумма по услуге %i\n", count_3, count_3 * 15000);
    printf("Клиентов по 4 услуге: %i, сумма по услуге %i\n", count_4, count_4 * 35000);
    printf("Клиентов по 5 услуге: %i, сумма по услуге %i\n", count_5, count_5 * 70000);
    printf("Клиентов по 6 услуге: %i, сумма по услуге %i\n", count_6, count_6 * 45500);

    printf("Самая популярная услуга: %i\n", pop1);
    printf("Вторая по популярности услуга: %i\n", pop2);
}