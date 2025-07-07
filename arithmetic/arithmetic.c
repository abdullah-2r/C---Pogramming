#include<stdio.h>
int main(){
    int a,b,sum,minus,mult,rem;
    float div;
    scanf("%d %d",&a,&b);
    sum = a + b;
    minus = a - b;
    mult = a * b;
    div = (float)a / b;
    rem = a % b;
    printf("sum : %d\n",sum);
    printf("minus : %d\n",minus);
    printf("mult : %d\n",mult);
    printf("div : %.2f\n",div);
    printf("rem : %d\n",rem);
    return 0;  
}