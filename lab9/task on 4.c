#include <stdio.h>

#define N 3  

// Упорядочивание элементов каждой строки по возрастанию
void sort(int matrix[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }
}

// Определение наличия нулей в матрице
int zero(int matrix[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (matrix[i][j] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// Нахождение среднего арифметического элементов матрицы
float med_num(int matrix[N][N]) {
    int total_sum = 0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            total_sum += matrix[i][j];
        }
    }
    return (float)total_sum/(N * N);
}

// Поменять местами главную и побочную диагонали
void swich_d(int matrix[N][N]) {
    for (int i=0; i<N; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][N-i-1];
        matrix[i][N-i-1] = temp;
    }
}

// Вывод матрицы на экран
void print_matrix(int matrix[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N];

    for(int i=0; i<N; ++i){//заполняем матрицу
        for(int j=0;j<N;++j){
            printf("Введите [%d][%d] элемент: \n",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Исходная матрица:\n");
    print_matrix(matrix);

    sort(matrix);
    printf("После упорядочивания строк по возрастанию:\n");
    print_matrix(matrix);

    if (zero(matrix)) {
        printf("В матрице есть нули.\n");
    } else {
        printf("В матрице нет нулей.\n");
    }

    printf("Среднее арифметическое элементов : %.2f\n", med_num(matrix));

    swich_d(matrix);
    printf("Матрица после замены главной и побочной диагоналей:\n");
    print_matrix(matrix);
}
