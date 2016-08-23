#include <stdio.h>
int main()
{
    int b, p, resultado, i;
    printf("Digite o valor da base da potencia:");
    scanf("%d", &b);
    printf("Digite o valor ao qual o numero sera elevado:");
    scanf("%d", &p);
    resultado = b;
    for (i =1; i<p; i++)
    resultado = b * resultado;
    printf("%d", resultado);
    return 0;
}
