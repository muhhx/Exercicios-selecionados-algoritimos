/*
05. Construa um algoritmo que leia uma matriz de dimensão 7 x 4 e, em um vetor de 7 elementos, armazene o menor elemento de cada linha da matriz.
*/

#include<stdio.h>
#define MAX 7
int main(void) {
    int i, j, menor, M[MAX][4], V[MAX];

    for (i=0; i<MAX; i++) {
        for (j=0; j<4; j++) {
            printf("\nLinha %d, Coluna %d, Numero: ", i+1, j+1);
            scanf("%d", &M[i][j]);
            if (j==0)
                menor = M[i][j];
            if (M[i][j] < menor)
                menor = M[i][j];
        }
        V[i] = menor;
        printf("\n");
    }

    printf("\n\n");
    for (i=0; i<MAX; i++) {
        printf("\nLinha %d, menor numero: %d", i+1, V[i]);
    }

    return 0;
}