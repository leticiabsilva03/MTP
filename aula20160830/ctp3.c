#include <stdio.h>
#include <ctype.h>
int main ()
{
    int indice=0, cont = 0;//1o caractere da string
    char investigador;
    char frase [287];
    printf ("Digite a frase desejada: ");
    gets(frase);
    investigador=frase[indice];
    while (investigador!=NULL) { //'\0' = NULL
            indice ++;
            if (isalpha(investigador)!=0)
            cont ++;
            investigador = frase[indice];
    }
    printf("A frase tem %d caracteres!\n", cont);
    return 0;
}
