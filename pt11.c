#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);// para descobrir a raiz quadrada de um número;
    double B = pow(2, 4);//para descobrir potência 2^4
    int C = round(3.14);//arredonda pra baixo (3)
    int D = ceil(3.14);// arredonda pra cima (4)
    int E = floor(3.99);// arredonda pra baixo (3)
    double F = fabs(-100);// se for positivo mantem o valor, se for negativo inverte o sinal
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%d", E);

    return 0;
}