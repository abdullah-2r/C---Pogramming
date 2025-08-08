#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c = a & b;
    d = a | b;
    e = a ^ b;
    printf(" AND : %d\n OR : %d\n EX-OR : %d\n",c,d,e);
    return 0;
}