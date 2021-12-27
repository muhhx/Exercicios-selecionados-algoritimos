/*
04. Construa um algoritmo que leia do teclado uma matriz quadrada (12 x 12) e verifique se ela é uma matriz identidade. Uma matriz quadrada possui o mesmo número de linhas e colunas. Uma matriz identidade possui 1 nos elementos da diagonal principal e 0 nos demais.
*/

#include<stdio.h>
#define MAX 12

int main(void) {
    int i, j, mult, soma, M[MAX][MAX];

    mult = 1;
    soma = 0;

    for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            printf("\nLinha %d, Coluna %d, Numero: ", i+1, j+1);
            scanf("%d", &M[i][j]);
            if (i==j) {
                mult *= M[i][j];
            } else
                soma += M[i][j];
        }
    }

    if ((mult == 1) && (soma == 0))
        printf("\n\nÉ uma matriz identidade!");
    else
        printf("\n\nNão é uma matriz identidade!");

    return 0;
}
