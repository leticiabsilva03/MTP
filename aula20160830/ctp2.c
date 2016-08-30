#include <stdio.h>
#include <ctype.h>
int main ()
{
    int indice=0;//1o caractere da string
    char investigador;
    char frase [287];
    printf ("Digite a frase desejada: ");
    gets(frase);
    investigador=frase[indice];
    while (investigador!=NULL) { //'\0' = NULL
            frase [indice]=toupper(investigador);
            indice ++;
            investigador = frase[indice];
    }
    printf("%s\n", frase);
    return 0;
}
