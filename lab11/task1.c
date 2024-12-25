#include <stdio.h>
#include <stdlib.h>

void init(int **arr, int n) {
    *arr = malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; ++i) {
        (*arr)[i] = i;
    }
}

int main() {
    int *arr = NULL;
    int n = 10;
    init(&arr, n);
    int i;
    for (i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
    free(arr); // Освобождаем выделенную память
    return 0;
}

Ошибка: Указатель arr не изменяется в функции init.

Шаги отладки:

Скомпилируйте программу с отладочной информацией:

bash
Copy
gcc -g -o task1 task1.c
Запустите GDB:

bash
Copy
gdb ./task1
Установите точку останова на функции init:

bash
Copy
(gdb) break init
Запустите программу:

bash
Copy
(gdb) run
Программа остановится на функции init. Используйте команду step, чтобы войти в функцию.

Проверьте значение указателя arr до и после вызова malloc:

bash
Copy
(gdb) print arr
(gdb) print *arr
Убедитесь, что arr не изменяется в main. Установите точку останова в main и проверьте значение arr после вызова init.

Исправьте код, передавая указатель на указатель, как показано в исправленном коде.
