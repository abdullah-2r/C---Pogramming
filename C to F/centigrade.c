//formula F = (c * 1.8) + 32
#include<stdio.h>
int main(){
    float c,f;
    scanf("%f",&c);
    f = (c * 1.8) + 32;
    printf(" Farenhite - %.2f",f);
    return 0;
}