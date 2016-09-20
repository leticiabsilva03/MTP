#include <stdio.h>

void par ();
void impar();

int main(){
    int k;
    printf("Digite 1 para par e 2 para impar: ");
    scanf("%d", k);
    system("cls");
    if (k==1)
        par();
    if (k==2)
        impar();
    return 0;
}
void par(){
    int i;
    for (i=1; i<11; i++)
        {if (i%2==0)
            printf("%d", i);
    }
}
void impar(){
    int j;
    for (j=1; j<11; j++)
       {if (j%2!=0)
            printf("%d", j);
    }
}
