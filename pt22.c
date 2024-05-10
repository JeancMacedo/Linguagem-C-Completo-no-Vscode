#include <stdio.h>
//arguments

void birthday(char name[], int age){
   
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);

}

int main(){
    char name[] = "Jean";
    int age = 22;

    birthday(name,age);

    return 0;
}