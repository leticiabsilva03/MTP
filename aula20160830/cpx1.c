#include <stdio.h>
#include <complex.h>
int main(){
    double complex Z1, Z2, soma;
    double R_Z1, I_Z1, R_Z2, I_Z2;
    printf("real de z1: ");
    scanf("%lf", &R_Z1);
    printf("imaginario de z1: ");
    scanf("%lf", &I_Z1);
    printf("real de z2: ");
    scanf("%lf", &R_Z2);
    printf("imaginario de z2: ");
    scanf("%lf", &I_Z2);
    Z1 = R_Z1 + I_Z1*I;
    Z2 = R_Z2 + I_Z2*I;
    soma = Z1 + Z2;
    printf("A soma dos complexos: %lf + %lf*j\n", creal(soma), cimag(soma) );
    return 0;
}
