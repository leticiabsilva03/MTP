#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float media (float * dados, int ndados);
float desviopadrao (float * dados, int ndados);
void recebe (float * dados, int ndados);
int main() {
    int ndados;
    float * dados;
    printf("Informe a quantidade de dados: ");
    scanf("%d", &ndados);
    dados = malloc (ndados * sizeof(float));
    printf("Media %g; Desvio padrao %g\n", media(dados, ndados), desviopadrao(dados, ndados));
    free (dados);
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
