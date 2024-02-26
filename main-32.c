/******************************************************************************

Подвиг 3. В программе ниже объявите функцию с именем fact, 
которая вычисляет факториал, переданного ей целого числа, 
и возвращает вычисленное значение. Напомню, что факториал любого целого 
положительного числа n вычисляется по формуле:

Если n = 0, то по правилам математики 0! = 1. 
Для отрицательных чисел функция fact должна возвращать число -1.

Вызовите в функции main функцию fact для вычисления факториала числа 6 
и выведите результат в консоль в виде целого числа.

*******************************************************************************/
#include <stdio.h>

int fact(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main(void) {
    int number = 6;
    int factorial = fact(number);
    printf("%d\n", factorial);
    return 0;
}