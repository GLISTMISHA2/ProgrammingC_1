#include <stdio.h>

int main() {
    int a;
    printf("Введите целое число: ");
    scanf("%d", &a);

    int position = 0; // Позиция бита

    printf("Биты с четными  : ");
    for (position = 0; position < sizeof(a) * 8; position += 2) {
        // Проверяем, установлен ли бит в текущей позиции
        if (a & (1 << position)) {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\nБиты с нечётными: ");
    for (position = 1; position < sizeof(a) * 8; position += 2) {
        // Проверяем, установлен ли бит в текущей позиции
        if (a & (1 << position)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}
