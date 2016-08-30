#include <stdio.h>
#include <complex.h>
#include <math.h>
int main(){
    double complex Z1, produto;
    double R_Z1, I_Z1;
    printf("real de z1: ");
    scanf("%lf", &R_Z1);
    printf("imaginario de z1: ");
    scanf("%lf", &I_Z1);
    Z1 = R_Z1 + I_Z1*I;
    produto = Z1 * conj (Z1);
    printf("Produto: %lf + %lf*j\n", creal(produto), cimag(produto));
    return 0;
}

