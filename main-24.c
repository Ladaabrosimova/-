/******************************************************************************

Объявите указатель ptr_a на переменную a и указатель ptr_b на переменную b.
Поменяйте адреса указателей ptr_a и ptr_b между собой, 
используя третий вспомогательный указатель с обобщенным типом void*. 
Выведите в консоль в одну строчку через пробел целочисленные значения, 
на которые ссылаются указатели ptr_a и ptr_b именно в таком порядке:

<значение для ptr_a> <значение для ptr_b>

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    short a, b;
    short *ptr_a = &a;
    short *ptr_b = &b;

    scanf("%hd, %hd", &a, &b);
    
    void *res = ptr_a;
    ptr_a = ptr_b;
    ptr_b = res;
    
    printf("%d %d", *ptr_a, *ptr_b);

    
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}