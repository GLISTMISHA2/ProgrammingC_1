#include <stdio.h>  
  
void swap(int* a, int* b){      
    int tmp = *a;      
    *a = *b;  
    *b = tmp;}   
    // 6
void bubble_sort(int *array, int size){      
    int i, j;  
    for (i = 0; i < size - 1; ++i) {          
        for (j = 0; j < size - i - 1; ++j) {              
            if (array[j] > array[j + 1]) {                  
                swap(&array[j], &array[j + 1]);}}}}  
int main() {  
    int array[100] = {10, 15, 5, 4, 21, 7};  
    bubble_sort(array, 6);  
    int i;   
    for (i = 0; i < 6 ; ++i) {          
        printf("%d ", array[i]);}      
    printf("\n");  
    return 0;  
}  

Ошибка: Выход за границы массива в функции bubble_sort.

Шаги отладки:

Скомпилируйте программу:

bash
Copy
gcc -g -o task4 task4.c
Запустите GDB:

bash
Copy
gdb ./task4
Установите точку останова на функции bubble_sort:

bash
Copy
(gdb) break bubble_sort
Запустите программу:

bash
Copy
(gdb) run
Программа остановится на функции bubble_sort. Используйте команду next, чтобы пройти по циклу.

Проверьте значения j и array[j] на каждой итерации:

bash
Copy
(gdb) print j
(gdb) print array[j]
Убедитесь, что j выходит за границы массива. Исправьте код, изменив условие цикла.
