#include<stdio.h>
int main(){
    int x=10;
    int y=x++;// y=10 then x=11
    int z=++x;// z=12 then x=12
    int a=x--;// a=12 then x=11
    int b=--x;// b=10 then x=10
    int c=++x;// c=11 then x=11
    int d=--x;// d=10 then x=10
    int e=x++;// e=10 then x=11
    int f=x--;// f=11 then x=10
    int g=++x;// g=11 then x=11
    int h=x--;// h=11 then x=10
    int i=--x;// i=9  then x=9
    int j=x++;// j=9  then x=10
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
    printf("Z = %d\n",z);
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    printf("C = %d\n",c);
    printf("D = %d\n",d);
    printf("E = %d\n",e);
    printf("F = %d\n",f);
    printf("G = %d\n",g);
    printf("H = %d\n",h);
    printf("I = %d\n",i);
    printf("J = %d\n",j);
    return 0;
}