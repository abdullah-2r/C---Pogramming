#include<stdio.h>
int main() {
    double num1,num2,sum,sub,mult,div;
    char oper;
    // printf("Enter the first number");
    scanf("%lf\n",&num1);
    // printf("Enter the second number");
    scanf("%lf\n",&num2);
    // printf("Enter a valid  operator(+,-,*,/)");
    scanf("%c\n",&oper);
    switch(oper)
    {
        case '+' :
        {
            sum = num1 + num2;
            printf("Sum : %lf\n",sum);
            break;
        }
        case '-' :
        {
            sub = num1 - num2;
            printf("Subtraction : %lf\n",sub);
            break;
        }
        case '*' :
        {
            mult = num1 * num2;
            printf("Multiplication : %lf\n",mult);
            break;
        }
        case '/' :
        {
            div = num1 / num2;
            printf("Quotient : %lf\n",div);
            break;
        }
        default :
        printf("Invalid Input");
    }
    return 0;
}