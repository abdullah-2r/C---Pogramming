#include<stdio.h>
int main() {
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("Biggest number = %d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Biggest number %d",num2);     
    }
    else if(num3>num1 && num3>num2){
        printf("Biggest number %d",num3);
    }
    else{
        printf("All numbers are equal");      
    }
    return 0;
}