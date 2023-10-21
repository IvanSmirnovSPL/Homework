#include <stdio.h>
#include <stdlib.h>

// Лабораторная  работа  №4
// по  теме: “Разветвляющиеся процессы.
// Оператор switch”
// 12 вариант, 2 задание

// вывод словесного описания числа от 100000 до 110000

int main()
{
    // считываем число
    int num;
    scanf("%i", &num);

    // подсчёт кол-ва тысяч, сотен, десятков, единиц в числе
    int thousands = num / 1000;
    num          -= thousands * 1000;
    int hundreds  = num  / 100;
    num          -= hundreds * 100;
    int tens      = num / 10;
    int units     = num  - tens * 10;

    // вывод словесного описания
    switch (thousands - 100)
    {
    case 10:
        printf("Сто десять тысяч");
        break;
    case 9:
        printf("Сто девять тысяч");
        break;
    case 8:
        printf("Сто восемь тысяч");
        break;
    case 7:
        printf("Сто семь тысяч");
        break;
    case 6:
        printf("Сто шесть тысяч");
        break;
    case 5:
        printf("Сто пять тысяч");
        break;
    case 4:
        printf("Сто четыре тысячи");
        break;
    case 3:
        printf("Сто три тысячи");
        break;
    case 2:
        printf("Сто две тысячи");
        break;
    case 1:
        printf("Сто одна тысяча");
        break;
    case 0:
        printf("Сто тысяч");
        break;
    default:
        break;
    }

    switch (hundreds)
    {
    case 9:
        printf(" девятьсот");
        break;
    case 8:
        printf(" восемьсот");
        break;
    case 7:
        printf(" семьсот");
        break;
    case 6:
        printf(" шестьсот");
        break;
    case 5:
        printf(" пятьсот");
        break;
    case 4:
        printf(" четыреста");
        break;
    case 3:
        printf(" триста");
        break;
    case 2:
        printf(" двести");
        break;
    case 1:
        printf(" сто");
        break;
    default:
        break;
    }

    switch (tens)
    {
    case 9:
        printf(" девяносто");
        break;
    case 8:
        printf(" восемьдесят");
        break;
    case 7:
        printf(" семьдесят");
        break;
    case 6:
        printf(" шестьдесят");
        break;
    case 5:
        printf(" пятьдесят");
        break;
    case 4:
        printf(" сорок");
        break;
    case 3:
        printf(" тридцать");
        break;
    case 2:
        printf(" двадцать");
        break;
    case 1:
        switch (units)
        {
        case 9:
            printf(" девятнадцать");
            break;
        case 8:
            printf(" восемнадцать");
            break;
        case 7:
            printf(" семнадцать");
            break;
        case 6:
            printf(" шестнадцать");
            break;
        case 5:
            printf(" пятнадцать");
            break;
        case 4:
            printf(" четырнадцать");
            break;
        case 3:
            printf(" тринадцать");
            break;
        case 2:
            printf(" двенадцать");
            break;
        case 1:
            printf(" одиннадцать");
            break;
        case 0:
            printf(" десять");
            break;
        default:
            break;
        }
        goto stop;
    default:
        break;
    }

    switch (units)
    {
    case 9:
        printf(" девять");
        break;
    case 8:
        printf(" восемь");
        break;
    case 7:
        printf(" семь");
        break;
    case 6:
        printf(" шесть");
        break;
    case 5:
        printf(" пять");
        break;
    case 4:
        printf(" четыре");
        break;
    case 3:
        printf(" три");
        break;
    case 2:
        printf(" два");
        break;
    case 1:
        printf(" один");
        break;
    default:
        break;
    }
    stop: ;
}