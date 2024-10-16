#include <stdio.h>

int main() {
    int a, k;
    printf("Введите целое число: ");
    scanf("%d", &a);
    printf("Введите количество позиций для сдвига: ");
    scanf("%d", &k);

    int sdva = a << k;// Сдвиг числа влево на k позиций

    // Создание маски с единицами в младших k битах
    int mask = (1 << k) - 1; // Маска 
    int res = sdva | mask;// Объединение уже сдвинутого числа с маской через ИЛИ
    printf("Результат: %d\n", res);
}
