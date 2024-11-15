#include <stdio.h>

int main(){
    int n;
    printf("Введите размер матрицы (2 или 3): ");
    scanf("%d", &n);

    if (n == 2){
        int array[2][2];
        float x,y;
        float delta;
        float r1,r2;

        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                printf("Введите элемент a[%d][%d]",i,j);
                scanf("%d",&array[i][j]);}} 

        printf("Введите значение после 'равно' 1 уравнения: ");
        scanf("%f",&r1);
        printf("Введите значение после 'равно' 2 уравнения: ");
        scanf("%f",&r2);

        delta = (array[0][0]*array[1][1])-(array[0][1]*array[1][0]);
        x = (r1*array[1][1])-(r2*array[0][1]);
        y = (r2*array[0][0])-(r1*array[1][0]);
        

        if (delta == 0){
            printf("Нет единственного решения.");
            } 
        else {
            printf("x = %.1f\n",x/delta);
            printf("y = %.1f",y/delta);
        }
    }
    else if (n == 3){

        int array[3][3];
        float x,y,z,r1,r2,r3,delta;

        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                printf("Введите элемент a[%d][%d]",i,j);
                scanf("%d",&array[i][j]);}}

        printf("Введите значение после 'равно' 1 уравнения: ");
        scanf("%f",&r1);
        printf("Введите значение после 'равно' 2 уравнения: ");
        scanf("%f",&r2);
        printf("Введите значение после 'равно' 3 уравнения: ");
        scanf("%f",&r3);

        delta = (array[0][0]*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*array[2][0])+(array[1][0]*array[2][1]*array[0][2])-(array[2][0]*array[1][1]*array[0][2])-(array[1][0]*array[0][1]*array[2][2])-(array[2][1]*array[1][2]*array[0][0]);
        if (delta == 0) {
            printf("Нет единственного решения.");
            }
        else {
        x = (r1*array[1][1]*array[2][2])+(array[0][1]*array[1][2]*r3)+(r2*array[2][1]*array[0][2])-(r3*array[1][1]*array[0][2])-(r2*array[0][1]*array[2][2])-(array[2][1]*array[1][2]*r1);
        y = (array[0][0]*r2*array[2][2])+(r1*array[1][2]*array[2][0])+(array[1][0]*r3*array[0][2])-(array[2][0]*r2*array[0][2])-(array[1][0]*r1*array[2][2])-(r3*array[1][2]*array[0][0]);
        z = (array[0][0]*array[1][1]*r3)+(array[0][1]*r2*array[2][0])+(array[1][0]*array[2][1]*r1)-(array[2][0]*array[1][1]*r1)-(array[1][0]*array[0][1]*r3)-(array[2][1]*r2*array[0][0]);
        
        printf("x = %.1f\n",x/delta);
        printf("y = %.1f\n",y/delta);
        printf("z = %.1f\n",z/delta);
        }

    }else printf("Неправельный размер матрицы");
    }
