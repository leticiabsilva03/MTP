#include <stdio.h>
#include <string.h>

#define N 20

struct cadastro {
    char nome;
    int idade;
    int numero;
}vetcadastro[N];

int cadastrar (i)
{
    for (; i<N; i++)
    {
        system ("cls");
        printf("Nome: ");
        scanf("%s", vetcadastro[i].nome);

    }
}

int main(){
    int op, i=0;
    do
    {
        printf("escolha uma opcao: %d\n", &op);
        printf("1-Cadastrar");
        printf("2-Listar Nomes");
        printf("3-Listar telefones");
        print("4- Listar idades");
        scanf("%d" , &op);
        switch (op);
        case 1:
            cadastrar ();
            break;
        case 2:
            listarnomes ();
            break;
        case 3:
            listartelefones ();
            break;
        case 4:
            listaridades();
            break;
    }while (op!=5);
return 0;
}
