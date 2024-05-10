#include <stdio.h>
#include <stdbool.h>

int main (){

    // logical operators == || (OR) checks if at least one condition is true
    
    float temp;
    printf("\nInforme a temp: ");
    scanf("%f", &temp);
    if(temp <= 0 || temp >= 30){

        printf("\nThe weather is bad!");
    }
    //else if(temp >= 30){
       // printf("\nThe weather is bad!");
    //}
    else{
        printf("\nThe weather is good!");
    }

    // && = AND
    // || = OR
    // ! = NOT

    return 0;
}