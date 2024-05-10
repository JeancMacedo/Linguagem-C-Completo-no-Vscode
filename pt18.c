#include <stdio.h>
#include <stdbool.h>

int main (){

    // logical operators == && (and) checks if two conditions are true
    float temp = 25;
    bool sunny = false;
    if(temp >= 0 && temp <= 30 && sunny == false){

        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }

    // && = AND
    // || = OR
    // ! = NOT

    return 0;
}