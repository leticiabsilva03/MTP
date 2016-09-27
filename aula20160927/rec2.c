#include <stdio.h>

int soma(int A, int N);
int main() {
    int somafinal;
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    printf("Soma = %d", soma (A, N) );
    return 0;
}
int soma(int A, int N)
{
    int somafinal=0, n;
    n=A;
    if(A==N)
    return 1;
    else
        somafinal= n + soma(A+1, N);
    {return (somafinal);
}
}

