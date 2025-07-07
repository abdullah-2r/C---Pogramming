#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    double result=sin(x);//log(x),log10(x),exp(x)
    printf("Result = %.2lf",result);
    return 0;
}