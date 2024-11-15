#include <stdio.h>
int main(){
    int choice;
    printf("Введите размер матрицы 3 или 2: ");
    scanf("%d",&choice);
    if (choice == 2){    
        int m[2][2];//создаем матрицу
        float delta;
        float res1,res2;
        float x,y;
        for(int i = 0;i<2;++i){//заполняем матрицу
            for(int j = 0;j<2;++j){
                printf("Введите [%d][%d] элемент: \n",i,j);
                scanf("%d",&m[i][j]);
            }
        }
        //дальше конкретно метот крамера
        //printf("%d \n",m[1][1]);
        delta = m[0][0]*m[1][1]-m[1][0]*m[0][1];
        //printf("%f",delta);
        printf("Введите свободный член 1 уравнения \n");
        scanf("%f",&res1);
        printf("Введите свободный член 2 уравнения \n");
        scanf("%f",&res2);
        float dx = (res1*m[1][1])-(res2*m[0][1]);
        float dy = (res2*m[0][0])-(res1*m[1][0]);
        x = dx / delta;
        y = dy / delta;
        if (delta == 0) {
            printf("нет единственного решения");
        }
        else {
           printf("x = %f y = %f\n",x,y); 
        }
        }
    if (choice == 3){
        int m[3][3];//создаем матрицу
        float delta;
        float res1,res2,res3;
        float x,y,z;
        for(int i = 0;i<3;++i){//заполняем матрицу
            for(int j = 0;j<3;++j){
                printf("Введите [%d][%d] элемент: \n",i,j);
                scanf("%d",&m[i][j]);
            }
        }
        //дальше конкретно метот крамера
        //printf("%d \n",m[1][1]);
        delta = m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])-
                m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+
                m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
        //printf("%f",delta);
        printf("Введите свободный член 1 уравнения \n");
        scanf("%f",&res1);
        printf("Введите свободный член 2 уравнения \n");
        scanf("%f",&res2);
        printf("Введите свободный член 3 уравнения \n");
        scanf("%f",&res3);
        float dx = res1*(m[1][1]*m[2][2]-m[1][2]*m[2][1])-
                    m[0][1]*(res2*m[2][2]-m[1][2]*res3)+
                    m[0][2]*(res2*m[2][1]-m[1][1]*res3);
        float dy = m[0][0]*(res2*m[2][2]-m[1][2]*res3)-
                    res1*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+
                    m[0][2]*(m[1][0]*res3-res2*m[2][0]);
        float dz = m[0][0]*(m[1][1]*res3-res2*m[2][1]) -
                    m[0][1]*(m[1][0]*res3-res2*m[2][0])+
                    res1*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
        x = dx / delta;
        y = dy / delta;
        z = dz / delta;
        if (delta == 0) {
            printf("нет единственного решения");
        }
        else{printf("x = %f y = %f z = %f\n",x,y,z);}
        }
        else{
            printf("ERROR\n");
        }
}
