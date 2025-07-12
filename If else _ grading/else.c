#include<stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=80){
        printf("Grade = A+");
    }
    else if(marks>=70){
        printf("Grade = A");
    }
    else if(marks>=60){
        printf("Grade = A-");
    }
    else if(marks>=50){
        printf("Grade = B");
    }
        else if(marks>=40){
            printf("Grade = C");
        }
        else if(marks>=33 && marks<=40){
            printf("Grade = D");
        }
        else {
            printf("Failed");
        }
        return 0;
    }