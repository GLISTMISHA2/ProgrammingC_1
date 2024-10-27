#include <stdio.h>

// функция для сортировки положительных элементов
void sort_positive(float arr[], int n, float sorted[]) {
    int count = 0;
    // добавляем положительные элементы в sorted
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            sorted[count] = arr[i];
            count++;
        }
    }
    // сортируем положительные элементы по возрастанию
    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (sorted[i] > sorted[j]) {
                // меняем значения
                float temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }
    // для обозначения конца массива
    sorted[count] = -1;
}
// функция для сортировки отрицательных элементов
void sort_negative(float arr[], int n, float sorted[]) {
    int count = 0;
    // добавляем отрицательные элементы в массив sorted
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            sorted[count] = arr[i];
            count++;
        }
    }
    // сортируем отрицательные элементы в порядке убывания
    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (sorted[i] < sorted[j]) {
                float temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }
    // для обозначения конца массива
    sorted[count] = -1;
}
int main() {
    int n;
    printf("Введите количество элементов: ");
    // вводим количество элементов массива
    scanf("%d", &n);
    float X[n]; // исходный массив
    printf("Введите элементы массива:\n");
    // вводим элементы массива
    
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &X[i]);
    }
    float positives[n]; // массив для положительных
    float negatives[n]; // массив для отрицательных
    float Y[2*n]; // массив для объединенных положительных и отрицательных
    // сортируем положительные
    sort_positive(X, n, positives);
    // сортируем отрицательные
    sort_negative(X, n, negatives);
    
    
    // заполняем массив Y сначала положительные потом отрицательные
    int idx = 0; // индекс для Y
    for(int i = 0; positives[i] != -1; i++) {
        Y[idx++] = positives[i]; // добавляем положительные в Y
    }
    for(int i = 0; negatives[i] != -1; i++) {
        Y[idx++] = negatives[i]; // добавляем отрицательные в Y
    }
    
    
    // выводим отсортированный массив Y
    printf("Отсортированный массив Y:\n");
    for (int i = 0; i < idx; i++) {
        printf("%.2f ", Y[i]); // выводим элементы массива
    }
    printf("\n");
    
    
    // ищем мин и макс в начальном массиве X
    float min_x = X[0]; // изначально думаем что первый элемент минимален
    float max_x = X[0]; // и максимален
    // поиск мин и макс
    for (int i = 1; i < n; i++) {
        if (X[i] < min_x) {
            min_x = X[i];
        }
        if (X[i] > max_x) {
            max_x = X[i];
        }
    }
    // Выводим
    printf("Минимальный элемент в X: %.2f\n", min_x);
    printf("Максимальный элемент в X: %.2f\n", max_x);
    
}
