#include<stdio.h>
int main(){
    char lower,upper;
    scanf("%c",&lower); //upper
    upper=toupper(lower); //lower=tolower(upper)
    printf("The Uppercase Letter is : %c",upper); //lower
    return 0;
}