#include <stdio.h>

#define N 3  

// Подзадача а) Упорядочивание элементов каждой строки по возрастанию
void sort_rows(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }
}

// Подзадача б) Определение наличия нулей в матрице
int has_zeros(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// Подзадача в) Нахождение среднего арифметического элементов матрицы
double average_of_matrix(int matrix[N][N]) {
    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            total_sum += matrix[i][j];
        }
    }
    return (double)total_sum / (N * N);
}

// Подзадача г) Поменять местами главную и побочную диагонали
void swap_diagonals(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][N - i - 1];
        matrix[i][N - i - 1] = temp;
    }
}

// Вывод матрицы на экран
void print_matrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N];

    for(int i = 0;i<N;++i){//заполняем матрицу
        for(int j = 0;j<N;++j){
            printf("Введите [%d][%d] элемент: \n",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Исходная матрица:\n");
    print_matrix(matrix);

    sort_rows(matrix);
    printf("Матрица после упорядочивания строк по возрастанию:\n");
    print_matrix(matrix);

    if (has_zeros(matrix)) {
        printf("В матрице есть нули.\n");
    } else {
        printf("В матрице нет нулей.\n");
    }

    double avg = average_of_matrix(matrix);
    printf("Среднее арифметическое элементов матрицы: %.2f\n", avg);

    swap_diagonals(matrix);
    printf("Матрица после замены главной и побочной диагоналей:\n");
    print_matrix(matrix);
}
