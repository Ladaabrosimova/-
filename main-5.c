/******************************************************************************

Подвиг 11. С клавиатуры вводятся две буквы (в одну строку через пробел). 
Вывести на экран следующую строку:

"Коды: <буква1> = <код буквы1>, <буква2> = <код буквы2>"

*******************************************************************************/
#include <stdio.h>

int main() {
    char l1, l2;

    scanf("%c %c", &l1, &l2);

    int c1 = (int)l1;
    int c2 = (int)l2;

    printf("Коды: %c = %d, %c = %d\n", l1, c1, l2, c2);

    return 0;
}
