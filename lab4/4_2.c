#include <stdio.h> 

int main() {
    int str;
    printf("Введите количество строк: ");
    scanf("%d", &str);
    // Внешний для строк
    for (int i = 1; i <= str; i++) {
        // Внутренний для вывода чисел
        for (int j = 0; j <= str - i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}
