#include <stdio.h>

double square(double x){

    double result = x * x; // or just
    return result;        //  return x * x;
}

int main(){
// return = returns a value back to a calling function

    double x = square(3.14);
    printf("%.2lf", x);

    return 0;
}