#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        printf("Small Letter");
    }
    /*else if(x>='A' && x<='Z'){
        printf("Capital Letter");
    }
    else{
        printf("Invalid Input");
    }*/
    else {
    printf("Capital Letter");
}                      
return 0;
}