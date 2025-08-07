#include<stdio.h>
int main() {
    int digit;
    scanf("%d",&digit);
    switch(digit)
    {
        case 0:
         printf("Zero");
         break;
        case 1:
          printf("One");
          break;
        case 2:
          printf("Two");
          break;
        case 3:
         printf("Three");
         break;
        case 4:
         printf("Four");
         break;
        case 5:
         printf("Five");
         break;
        case 6:
         printf("Six");
         break;
         default:
         printf("Invalid Input");
    }
    return 0;
}

