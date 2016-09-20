#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int vet[10], som=0, prod=1, i;
    printf("\n Informe 10 numeros: \n");
    for(i=0;i<10;i++)
        {
            scanf("%d",&vet[i]);
		}

    for (i=0;i<10;i++)
    {
        som = som+vet[i];
    }
     for (i=0;i<10;i++)
    {
        prod = prod * vet[i];
    }

    printf(" Soma: %d", som);
    printf(" Produto: %d", prod);
    return 0;
}
