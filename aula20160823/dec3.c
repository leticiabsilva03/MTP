#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int dado1, dado2, dado3, soma;
    dado1=rand()%6 + 1;
    dado2=rand()%6 + 1;
    dado3=rand()%6 + 1;
    soma = dado1 + dado2 + dado3;
    printf("%d\n", soma);
    if (soma==7 || soma ==11)
    printf("Voce ganhou!\n");
    else
    printf("Voce perdeu!\n");
    return 0;
}
