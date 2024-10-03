//№2
#include <stdio.h>
//чето не ясно че это 
int main()
{
    int a;
    int b;
    printf("введите а");
    scanf("%d",&a);
    printf("введите b");
    scanf("%d",&b);
    for(int n=a;n%a!=0 || n%b!=0; n++){
        printf("%d %d : %d",a,b,n);
    }
}
