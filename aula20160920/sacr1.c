#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pegacarta ();
char mostracarta(int c);
int main (){
    srand(time(0));
    int i, carta1, carta2, soma_comp = 0;
    int ncartas, soma_user=0, carta_user;
    carta1 = pegacarta();
    carta2 = pegacarta();
    printf("Quantas cartas voce quer? ");
    scanf("%d", &ncartas);
    for (i=0; i<ncartas; i++){
        carta_user = pegacarta();
        printf("%c", mostracarta(carta_user));
        soma_user = soma_user + carta_user;
    }
    if (soma_user>21)
        printf("\nPerdeu!\n");
    else{
        if (soma_user > carta1 + carta2)
            printf("\nVoce ganhou, minhas cartas: %c %c\n", mostracarta(carta1), mostracarta(carta2));
        else
            printf("\nVoce perdeu, minhas cartas: %c %c\n", mostracarta(carta1), mostracarta(carta2));

    }

    return 0;
}
int pegacarta(){
    return ((rand()%13)+1);
}
char mostracarta (int c){
    char carta;
    switch(c){
        case 1: carta = 'A'; break;
        case 10: carta = 'D'; break;
        case 11: carta = 'J'; break;
        case 12: carta = 'Q'; break;
        case 13: carta = 'K'; break;
        default:
            carta = 48 + c;
    }
    return carta;
}
