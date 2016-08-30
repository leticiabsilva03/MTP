#include <stdio.h>
#include <math.h>
int main(){
    float baselog, numerolog, logaritmo;
    printf("Valor do numero: ");
    scanf("%f", &numerolog);
    printf("Valor da base: ");
    scanf("%f", &baselog);
    logaritmo = log(numerolog) / log(baselog);
    printf("O resultado do calculo do logaritmo e: %f", logaritmo);
    return 0;
}
