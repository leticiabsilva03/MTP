#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int peganumero ();

int main (){
    srand(time(0));
    int n1, n2, n3, n4, n5, soma_user, n_user, i;
    n1 = peganumero();
    n2 = peganumero();
    n3 = peganumero();
    n4 = peganumero();
    n5 = peganumero();
    soma_user = n1+n2+n3+n4+n5;
    printf("Os numeros sorteados sao: %d %d %d %d %d", n1, n2, n3, n4, n5);
    if (soma_user>=21)
        printf("\nGanhou! %d \n", soma_user);
    else
        printf("\nPerdeu! %d", soma_user);
    return 0;
}
int peganumero (){
    return (rand()%6)+1;
}
