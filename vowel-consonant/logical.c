#include<stdio.h>
 int main(){
    char letter;
    scanf("%c",&letter);
    /*if(letter=='a'){
        printf("%c is vowel",letter);
    }
    else if(letter=='e'){
        printf("%c is vowel",letter);
    }
    else if(letter=='i'){
        printf("%c is vowel",letter);
    }
    else if(letter=='o'){
        printf("%c is vowel",letter);
    }
    else if(letter=='u'){
        printf("%c is vowel",letter);
    }
    else{
        printf("%c is consonant",letter);
    } */
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}