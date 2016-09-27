#include <stdio.h>

struct divisao_racional {
    int numerador;
    int denominador;
};
struct divisao_racional soma (int num1, int num2, int den1, int den2);
int main () {
    struct divisao_racional resposta;
    int num1, num2, den1, den2;
    printf("Entre com um numero racional: "); scanf("%d/%d",&num1,&den1);
    printf("Entre com ooutro numero racional: "); scanf("%d/%d",&num2,&den2);
    resposta = soma (num1, num2, den1, den2);
    printf("Soma: %d/%d", resposta.numerador, resposta.denominador);
    return 0;
}
struct divisao_racional soma (int num1, int num2, int den1, int den2){
    struct divisao_racional resposta;
    resposta.numerador = num1 + num2;
    resposta.denominador = den1 + den2;
    return resposta;
}

