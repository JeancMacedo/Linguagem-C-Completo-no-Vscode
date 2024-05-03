#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("\nEnter side A: ");
    scanf("%lf", &A);
    printf("\nEnter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B); //sqrt é para descobrir a raiz quadrada//

    printf("\nSide C: %lf", C);

    return 0;
}