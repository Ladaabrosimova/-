/******************************************************************************

Подвиг 10. Вводится строка, состоящая из названий городов, разделенных пробелом.
Необходимо преобразовать эту строку, чтобы названия городов 
шли через точку с запятой. Результат отобразить на экране.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str[30];
    scanf("%[^\n]", str);
    
    for( int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            str[i] = ';';
        }
    }
    printf("%s", str);
    
    return 0;
}