/******************************************************************************

Подвиг 4. Напишите программу, которая читает из входного потока два целых числа,
записанных в одну строчку через пробел, и вычисляет их среднее арифметическое 
с помощью функции get_mean2. Эта функция должна принимать два целых числа,
а возвращать - вещественное число (среднее арифметическое). 
Вызовите функцию get_mean2 для прочитанных целых чисел и 
выведите результат ее работы в консоль в виде вещественного числа с 
точностью до десятых.

*******************************************************************************/
#include <stdio.h>

double get_mean2(int a, int b) {
    return (a + b) / 2.0;
}

int main() {
    int c, d;
    scanf("%d %d", &c, &d);
    
    double result = get_mean2(c, d);
    printf("%.1f\n", result);
    
    return 0;
}