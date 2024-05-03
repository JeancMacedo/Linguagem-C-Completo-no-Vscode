#include <stdio.h>

int main(){

    char name[25]; //bytes
    int age;
    
    printf("What is your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // use quando for usar espaço entro as palavras
    name[strlen(name)-1] = '\0'; // formatação para não pular a linha

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?",name);
    printf("\nYou age is: %d",age);

        return 0;
}