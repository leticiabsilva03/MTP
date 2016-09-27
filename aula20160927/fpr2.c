#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soletras (char *frase, int n, char *novafrase);
int main (){
    char frase [256], novafrase [256];
    printf("Entre com uma frase:");
    gets(frase);
    soletras (frase, strlen(frase), novafrase);
    printf("%s\n", novafrase);
    return 0;
}
void soletras (char *frase, int n, char *novafrase){
    int i, j=0;
    for (i=0; i<n; i++)
        if (isalpha(frase[i])) {
            novafrase[j] = frase [i];
            j++;
        }
    novafrase[j] = '\0';
}
