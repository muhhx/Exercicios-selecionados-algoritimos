/*
02. Faça um algoritmo que leia uma matriz A (5 x 5). Construa uma matriz B de mesma dimensão onde cada elemento de B deverá ser o dobro de cada elemento correspondente de A, exceto para os valores da diagonal principal (números 1 na matriz de exemplo abaixo), cujos valores deverão ser o triplo de cada elemento correspondente da matriz A.
*/

#include<stdio.h>

int main(void) {
    int i, j, A[5][5], B[5][5];

    //Calcula matrizes
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("\nLinha %d, Coluna: %d, Numero: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            if (i == j)
                B[i][j] = A[i][j] * 3;
            else 
                B[i][j] = A[i][j] * 2;
        }
    }
    
    //Apresenta resultado
    printf("\n\n");
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
