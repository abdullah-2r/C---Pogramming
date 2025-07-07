//formula - (F - 32) / 1.8
#include<stdio.h>
int main (){
    float C,F;
    scanf("%f",&F);
    C = (F - 32) / 1.8;
    printf("Centigrade  %f\n",C);
    return 0;
}