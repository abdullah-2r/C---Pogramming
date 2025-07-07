#include<stdio.h>
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int result;
    result = pow(x,y);
    printf("Result = %d\n",result);
    return 0;
}