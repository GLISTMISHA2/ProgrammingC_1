#include <stdio.h>  
  
typedef struct{  
    char str[10];      
    int num;  
} NumberRepr;  
  
void format(NumberRepr *number){      
    sprintf(number->str, "%3d", number->num);}   
int main(){  
    NumberRepr number = { .num = 1025 };  
    format(&number);  
    printf("str: %s\n", number.str);      
    printf("num: %d\n", number.num);  
    return 0;}

Ошибка: Переполнение буфера str.

Шаги отладки:

Скомпилируйте программу:

bash
Copy
gcc -g -o task2 task2.c
Запустите GDB:

bash
Copy
gdb ./task2
Установите точку останова на функции format:

bash
Copy
(gdb) break format
Запустите программу:

bash
Copy
(gdb) run
Программа остановится на функции format. Используйте команду step, чтобы войти в функцию.

Проверьте значение number->str до и после вызова sprintf:

bash
Copy
(gdb) print number->str
Убедитесь, что str переполняется. Исправьте код, увеличив размер массива str.
