//leap year identify
#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%400==0){
        printf("Leap Year");
    }
    else if(year%4==0 && year%100!=0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}