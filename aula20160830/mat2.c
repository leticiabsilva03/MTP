#include <stdio.h>
#include <math.h>
int main(){
    float lado1, lado2, angulo,lado3;
    printf("Valor do lado 1: ");
    scanf("%f", &lado1);
    printf("Valor do lado 2: ");
    scanf("%f", &lado2);
    printf("Valor do angulo em radianos: ");
    scanf("%f", &angulo);
    lado3 = sqrt((pow(lado1, 2.)+pow(lado2, 2.) - (2*lado1*lado2) *cos(angulo)));
    printf("O valor do lado 3 e: %f", lado3);
    return 0;
}
