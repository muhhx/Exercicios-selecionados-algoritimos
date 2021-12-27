/*
06. Elabore um algoritmo que leia do teclado uma matriz triangular superior de dimensão 20x20. Uma matriz triangular superior é quadrada e possui 0 nos elementos abaixo da diagonal principal e qualquer outro valor nos elementos da diagonal principal e acima dela.
*/

#include<stdio.h>
#define MAX 20

int main(void) {
    int i, j, M[MAX][MAX];

    //Recebe valor
    for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            if (j>=i) {
                printf("\nLinha %d, Coluna %d, Valor: ", i+1, j+1);
                scanf("%d", &M[i][j]);
            } else
                M[i][j] = 0;
        }
    }
    
    //Imprime na tela
    for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
