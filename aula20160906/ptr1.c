//Crie uma variável do tipo unsigned int (4 bytes) inicializando-a com 0xFACA8421. Retorne seu endereço na memória, assim como seu conteúdo na base decimal. Crie um ponteiro do tipo unsigned char (1 byte) e verifique o conteúdo de cada qual dos 4 bytes de memória da variável.
#include <stdio.h>
int main () {
    unsigned int numero = 0xFACA8421;
    unsigned char * ponteiro = NULL; // aponta pra lugar nenhum
    printf("%p : %u\n", &numero, numero);
    ponteiro = (unsigned char *) &numero;
    printf("%p : %X\n", ponteiro, *ponteiro);
    ponteiro++;
    printf("%p : %X\n", ponteiro, *ponteiro);
    ponteiro++;
    printf("%p : %X\n", ponteiro, *ponteiro);
    ponteiro++;
    printf("%p : %X\n", ponteiro, *ponteiro);
    return 0;
}
