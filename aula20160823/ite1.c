#include <stdio.h>
int main()
{
    int i;
    int numero, fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i=2; i<= numero; i++)
        fatorial = fatorial * i;
    printf("Fatorial de %d e %d\n",numero,fatorial);
    return 0;
}
