#include<stdio.h>
int main (){
double a,b,c,d,x1,x2;
scanf("%lf %lf %lf",&a,&b,&c);
d = sqrt(b*b-4*a*c);
x1 = (-b+d)/(2*a);
x2 = (-b-d)/(2*a);
printf("X1 = %.4lf\n",x1);
printf("X2 = %.4lf\n",x2);
return 0;
}