#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nYou have %d and you are enable to vote!", age); 
    }
    else if(age < 0){
        printf("\nYou don't have %d and you haven't been born yet!", age);
    }
    else{
        printf("\nYou have %d and you don't are enable to vote!", age);
    }
    return 0;
}