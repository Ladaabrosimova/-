/******************************************************************************

Объявите указатель с именем ptr_k на переменную k. 
Увеличьте значение переменной k на 10, используя указатель ptr_k.

P. S. В консоль ничего выводить не нужно.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int init, k;
    int *ptr_k; 
    
    scanf("%d", &init);
    k = init;

    ptr_k = &k; 
    *ptr_k += 10; 

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}