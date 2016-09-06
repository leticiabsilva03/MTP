#include <stdio.h>
int main () {
    int vet [10];
    int i, j, k, aux, l;
    for (i=0; i<10; i++){
        printf("Entre com o numero %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    for (j=0, k=9; j<5; j++, k--){
        aux = vet [j];
        vet [j] = vet [k];
        vet [k] = aux;
    }
    for (l=0; l<10; l++)
        printf("%d\n", vet[l]);
    return 0;
}
