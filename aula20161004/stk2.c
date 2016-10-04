#include <stdio.h>
#include <math.h>
void recebe (float * dados, int ndados);
float media (float * dados, int ndados);
float desviopadrao (float * dados, int ndados);

int main() {
    int ndados=5;
    float * dados;
    printf("Media %g; Desvio padrao %g\n", media(dados, ndados), desviopadrao(dados, ndados));
    return 0;
}
void recebe (float * dados, int ndados){
    int i;
    for (i=0; i<ndados; i++){
        printf("Entre com o dado #%d:", i);
        scanf("%f", &dados[i]);
    }
}
float media (float * dados, int ndados){
    float soma = 0.f;
    int i;
    for (i=0; i< ndados; i++) soma += soma + dados [i];
    return soma/ndados;
    }
float desviopadrao (float * dados, int ndados){
    float soma = 0.f;
    float m = media (dados, ndados);
    int i;
    for (i=0; i< ndados; i++) soma += pow (m - dados [i], 2.f);
    return sqrt (soma/(ndados-1));

}

