#include <stdio.h>
int main ()
{
    float base, altura, area;
    printf("favor entrar com o valor da base do triangulo: ");
    scanf("%f",&base);
    printf("favor entrar com o valor da altura do triangulo: ");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("A area do triangulo e: %f", area);
	return 0;
}
