#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    if(grade == 'A'){
        printf("Perfect\n");
    }
    else if(grade == 'B'){
        printf("You did good!\n");
    }
    else if(grade == 'C'){
        printf("You did okay!\n");
    }
    else if(grade == 'D'){
        printf("At least it's not an F\n");
    }
    else if(grade == 'F'){
        printf("YOU FAILED\n");
    }
    else{
        printf("That's not a valid grade\n");
    }
    return 0;
}