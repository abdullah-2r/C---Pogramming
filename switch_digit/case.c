#include<stdio.h>
int main() {
    int digit;
    scanf("%d",&digit);
    switch(digit)
    {
        case 0:
         printf("Zero",digit);
         break;
        case 1:
          printf("One",digit);
          break;
        case 2:
          printf("Two",digit);
          break;
        case 3:
         printf("Three",digit);
         break;
        case 4:
         printf("Four",digit);
         break;
        case 5:
         printf("Five",digit);
         break;
        case 6:
         printf("Six",digit);
         break;
         default:
         printf("Invalid Input");
    }
    return 0;
}

