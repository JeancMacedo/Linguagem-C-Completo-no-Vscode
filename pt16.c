#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); // Função toupper serve para deixar a letra maiuscula;

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5 ) + 32;
        printf("\n The temp in Farenheit is: %.1f", temp);
    } 
    else if(unit == 'F'){
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp =((temp - 32) * 5) / 9;
        printf("\n The temp in Celsius is: %.1f", temp);

    }
    else{
        printf("\n %c is a Information received wrong!\nTry again");
    }
    return 0;
}