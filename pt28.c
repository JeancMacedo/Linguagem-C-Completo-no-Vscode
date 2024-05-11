#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[30];

    printf("\nWhat's your name?: ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) // usei o 0 para declarar que é falso
    {
        printf("\nYou did not enter your name.");
        printf("\nWhat's your name?: ");
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}