/*
03. Crie um algoritmo que leia uma matriz A (5 x 2) e, em um matriz  B do mesmo tamanho, armazene a soma dos elementos de A na primeira coluna e a multiplicação dos elementos de A na segunda coluna.
*/

#include<stdio.h>

int main(void) {
    int i, j, A[5][2], B[5][2];

    //Calcula matriz
    for (i=0; i<5; i++) {
        for (j=0; j<2; j++) {
            printf("\nLinha: %d, Coluna: %d, Numero: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
        for (j=0; j<2; j++) {
            if (j==0)
                B[i][j] = A[i][j] + A[i][j+1];
            else
                B[i][j] = A[i][j-1] * A[i][j];
        }
    }

    //Apresenta resultado
    printf("\n\n");
    for (i=0; i<5; i++) {
        for (j=0; j<2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}