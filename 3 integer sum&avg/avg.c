#include<stdio.h>
int main(){
    int num1,num2,num3,sum;
    float avg;
    scanf("%d %d %d",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    avg = (float)sum / 3;
    printf("Sum - %d\n",sum);
    printf("Average - %.2f/n",avg);
    return 0;
}