#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int numero;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d",&numero);
    numero = numero + rand()%2;
    printf("%d\n", numero);
    if (numero%2==0)
    printf("O numero e par\n");
    else
    printf("O numero e impar\n");
return 0;
}
