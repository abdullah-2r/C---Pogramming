#include<stdio.h>
int main(){
    int choice;
    float temp,convert;
    // printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        {
            // printf("Fahrenheit to Celsius");
         scanf("%f",&temp);
         convert = (temp-32)/1.8;
         printf("Converted to Celsius : %f degree celsius",convert);

        }
        case 2: 
        {
            // printf("Celsius to Fahrenheit");
        scanf("%f",&temp);
        convert = (1.8*temp)+32;
        printf("Converted to Fahrenheit : %f degree fahrenheit",convert);
        }
        default:
        printf("Invalid Input");
    }
    return 0;
}