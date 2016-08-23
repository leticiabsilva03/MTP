#include <stdio.h>
int main ()
{
    float nota1, nota2, nota3, media;
    printf("favor entrar com o valor da primeira nota do aluno: ");
    scanf("%f",&nota1);
    nota1 = nota1 * 2;
    printf("favor entrar com o valor da segunda nota do aluno: ");
    scanf("%f",&nota2);
    nota2 = nota2 * 3;
    printf("favor entrar com o valor da terceira nota do aluno: ");
    scanf("%f",&nota3);
    nota3 = nota3 * 5;
    media = (nota1 + nota2 + nota3)/3;
    printf("A media do aluno e: %f", media);
	return 0;
}
