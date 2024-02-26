/******************************************************************************

Подвиг 2. Продолжите программу. В функции main объявите указатель 
с именем ptr_max_2 на функцию max_2 и вызовите функцию через этот указатель 
с переменными a и b. 
Выведите в консоль возвращенное вещественное число с точностью до десятых.

*******************************************************************************/
#include <stdio.h>

double max_2(double a, double b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    double a, b;
    scanf("%lf, %lf", &a, &b);

    double (*ptr_max_2)(double, double); 
    ptr_max_2 = max_2; 

    double result = ptr_max_2(a, b); 
    printf("%.1lf\n", result); 

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}