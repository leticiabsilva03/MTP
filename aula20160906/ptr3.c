#include <stdio.h>
int main () {
    int contagem = 0;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int tamanho_vetor = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;
    for(; ponteiro < vetor + tamanho_vetor ; ponteiro++){
        printf("%p : %X\n", ponteiro, *ponteiro);
        if (*ponteiro!=0x0)
            contagem ++;
    }
    printf("Sao %d os bytes de memoria com apenas 1's\n", contagem);
    return 0;

    }
