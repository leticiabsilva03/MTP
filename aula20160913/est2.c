#include <stdio.h>
#include <math.h>

#define RECEBEPONTO(c, ponto) \
    ({ printf ("Entre coord x de %c: ", c);\
       scanf ("%f", &ponto.x); \
       printf ("Entre coord y de %c: ", c);\
       scanf ("%f", &ponto.y); \
       printf ("Entre coord z de %c: ", c);\
       scanf ("%f", &ponto.z); })

#define MOSTRAPONTO(ponto) \
    ({ printf ("( %g; %g; %g)\n", ponto.x, ponto.y, ponto.z); })

#define SOMA(ptA, ptB, ptC, soma) \
    ({ soma.x = ptA.x + ptB.x; \
       soma.y = ptA.y + ptB.y; \
       soma.z = ptA.z + ptB.z; })

#define DISTANCIA(ptA, ptB, ptC, d) \
    ({ d=sqrt(pow(ptA.x - ptB.x , 2.f) + \
              pow(ptA.y - ptB.y , 2.f) + \
              pow(ptA.z - ptB.z , 2.f)); })

struct ponto {
    float x;
    float y;
    float z;
};
int main () {
    struct ponto A, B, S;
    float distancia;
    RECEBEPONTO ('A',A);
    RECEBEPONTO ('B',B);
    SOMA(A, B, C, S);
    MOSTRAPONTO(S);
    DISTANCIA(A, B, C, distancia);
    printf("A distancia entre eles: %g", distancia);
    return 0;

}
