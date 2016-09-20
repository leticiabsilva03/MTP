#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char vetor[200];
	int tam,i,j,t,m, cont=0;
	printf(" Informe uma palavra para verificar se e um palindromo: ");
	fflush(stdin);
	gets(vetor);
	tamanho = strlen(vetor);
	tam--;
	for( i=0 ; i <= tam; i++)
	{
		if((vetor[i] >= 32 && vetor[i] <=47)||(vetor[i] >= 58 && vetor[i] <=64) || (vetor[i] >= 91 && vetor[i] <=96) || (vetor[i] >= 123 && vetor[i] <=126))
		{
			t=0;
			for(j=1 ; j <= tam-i ; j++)
			{
				vetor[i+t]=vetor[i+j];
				t++;
			}
		tam--;
		i--;
		}
	}
	for(i=0 ; vetor[i] != '\0' ; i++)
	{
		if(vetor[i] >= 'A' && vetor [i] <= 'Z')
		{
			vetor[i] = vetor[i] + ('a' - 'A');
		}
	}
	m = tam;
	for( j=0 ; j <= tam ; j++)
	{
		if(vetor[j] == vetor[m])
			{	cont++;
				m--;
			}
	}
	if(cont == tam+1)

    {
        printf(" E um palindromo! ");
    }

	else
    {
        printf(" Nao e um palindromo! ");

    }
	return 0;
}
