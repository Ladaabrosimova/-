/******************************************************************************

Подвиг 4. Продолжите программу. В функции main из стандартного 
входного потока читаются целые числа. Необходимо все их сохранять 
в массиве marks (не более 20). То есть, чисел может быть и больше 20, 
но сохранять только первые 20 в порядке их считывания. 

Допишите функцию sum_ar, которая бы вычисляла сумму чисел переданного 
ей массива ar. Складывать следует только те числа, для которых переданная 
функция (через указатель) возвращает истину (не нулевое значение). 
Полученная сумма должна возвращаться функцией sum_ar.

Указатель на функцию должен инициализироваться любой функцией с сигнатурой:

int <имя функции>(int);
В функции main вызовите функцию sum_ar для массива marks, складывая только 
четные числа (проверка на четность выполняется дополнительной, 
вспомогательной функцией, которая, затем, передается последним 
аргументом в функцию sum_ar). Выведите в консоль целое значение, 
которое вернула функция sum_ar.

*******************************************************************************/
#include <stdio.h>

int sum_ar(const int *ar, size_t len_ar, int (*check_func)(int))
{
    int sum = 0;
    for (size_t i = 0; i < len_ar; ++i)
    {
        if (check_func(ar[i]))
        {
            sum += ar[i];
        }
    }
    return sum;
}

int main(void)
{
    int marks[20] = {0};
    int x;
    size_t count = 0;

    while (scanf("%d", &x) == 1 && count < 20)
    {
        marks[count] = x;
        count++;
    }

    int is_even(int num)
    {
        return num % 2 == 0;
    }

    int result = sum_ar(marks, count, is_even);

    printf("%d", result);

    return 0;
}