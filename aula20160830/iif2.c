#include <stdio.h>
#include <float.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdint.h>
int main()
{
    int i;
    long long int fatorial = 1;
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i=2; i<= numero; i++)
        fatorial = fatorial * i;
    printf("Fatorial de %d e %"PRId64,numero,fatorial);
    return 0;
}
