/******************************************************************************

Подвиг 7. Напишите программу ввода двух слов через пробел. 
Сформируйте новую строку, продублировав первое слово дважды, 
а второе - трижды (все слова в результирующей строке должны идти через пробел). 
Результат выведите на экран.

Программу следует реализовать без использования F-строк, 
а с применением оператора дублирования строк.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10], result[40];
    scanf("%s %s", str1, str2);

    strcpy(result, str1); // Копируем первое слово
    strcat(result, " ");  // Добавляем пробел
    strcat(result, str1); // Дублируем первое слово
    strcat(result, " ");  
    strcat(result, str2);
    strcat(result, " ");
    strcat(result, str2); 
    strcat(result, " ");  
    strcat(result, str2); 

    printf(result);

    return 0;
}
