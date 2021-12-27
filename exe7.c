/*
07. Elabore um algoritmo que leia uma matriz A dimensão 3x4 e crie uma matriz B que representa a transposta de A. Apresente na tela a matriz B.
*/

#include<stdio.h>

int main(void) {
    int i, j, A[3][4], B[3][4];

    //Calcula Matrizes
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("\nLinha %d, Coluna %d. Valor: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            B[j][i] = A[i][j];
        }
    }

    //Apresenta Matriz A
    printf("\n\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //Apresenta Matriz B
    printf("\n\n");
    for (i=0; i<4; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}