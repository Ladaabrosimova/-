/******************************************************************************

Подвиг 3. Вводится строка. Необходимо определить число 
вхождений дефисов (-) в этой строке. На экране отобразить полученное число.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str[30];
    int x = 0;
    scanf("%[^\n]", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            x++;
        }
    }
    
    printf("%d", x);
    
    return 0;
}