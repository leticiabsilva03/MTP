#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 256
int main () {
    int i;
    char frase [N];
    printf("Entre com uma frase: ");
    gets (frase);
    for (i=0; frase[i] != '\0'; i++)
    {
        frase[i]=toupper(frase[i]);
    }
    printf("%s\n", frase); // verificar
    printf("Tamanho: %u\n", strlen(frase));
    if (strcmp(frase, "BOM DIA")==0)
        printf("Bom dia para voce tambem\n");
    else
        printf("Voce quiz dizer: %s?\n", frase);
    return 0;
}
