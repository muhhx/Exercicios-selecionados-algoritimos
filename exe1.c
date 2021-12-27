/*
01.	Em uma competição de salto em distância cada atleta tem direito a cinco saltos. O salto mais baixo e mais alto do atleta deve ser desconsiderado, o resultado do atleta será determinado pela média de apenas três valores restantes. Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos. O programa deve ser encerrado quando não houverem mais atletas. Exemplo de como deve ser a saída para cada atleta lido:
*/

#include<stdio.h>
#define MAX 10

//Funções
int informaQuantidadeAtleta() {
    int n;
    do {
        printf("Informe o numero de atletas que vao saltar: ");
        scanf("%d", &n);
        if (n<0)
            printf("\nNumero Invalido!\n");
    } while (n<0);
    return n;
}
void informaNomeSaltoAtleta(char nomeAtleta[MAX], float saltoAtleta[MAX][5], int quantidadeAtleta) {
    int i, j;
    for (i=0; i<quantidadeAtleta; i++) {
        printf("\nDigite a inicial do atleta %d: ", i+1);
        scanf(" %c", &nomeAtleta[i]);
        for (j=0; j<5; j++) {
            printf("\nSalto %d do atleta %c: ", j+1, nomeAtleta[i]);
            scanf("%f", &saltoAtleta[i][j]);
        }
    }
}
void calculaApresentaInformacoes(char nomeAtleta[MAX], float saltoAtleta[MAX][5], float mediaAtleta[MAX], int quantidadeAtleta) {
    float soma, maior, menor;
    int i, j, soma2;
    for (i=0; i<quantidadeAtleta; i++) {
        soma = soma2 = 0;
        printf("\n\nAtleta: %c", nomeAtleta[i]);
        for (j=0; j<5; j++) {
            soma += saltoAtleta[i][j];
            if (j == 0)
                maior = menor = saltoAtleta[i][j];
            if (saltoAtleta[i][j] > maior)
                maior = saltoAtleta[i][j];
            if (saltoAtleta[i][j] < menor)
                menor = saltoAtleta[i][j];
        }
        for (j=0; j<5; j++) {
            if ((saltoAtleta[i][j] == maior) || (saltoAtleta[i][j] == menor))
                printf("\nSalto %d (DESCONSIDERADO): %.2fm", j+1, saltoAtleta[i][j]);
            else
                printf("\nSalto %d: %.2fm", j+1, saltoAtleta[i][j]);
        }
        mediaAtleta[i] = (soma - (menor + maior))/3;
        //Apresenta informações
        printf("\n\nResultado Final:");
        printf("\nAtleta: %c", nomeAtleta[i]);
        printf("\nSaltos considerados: ");
        for (j=0; j<5; j++) {
            if ((saltoAtleta[i][j] == maior) || (saltoAtleta[i][j] == menor)) {
            } else 
                printf("%.2fm ", saltoAtleta[i][j]);
        }
        printf("\nMedia dos saltos: %.2fm\n\n", mediaAtleta[i]);
    }
}

//Algorítimo Principal
int main(void) {
    int quantidadeAtleta;
    char nomeAtleta[MAX];
    float mediaAtleta[MAX], saltoAtleta[MAX][5];

    quantidadeAtleta = informaQuantidadeAtleta();
    informaNomeSaltoAtleta(nomeAtleta, saltoAtleta, quantidadeAtleta);
    calculaApresentaInformacoes(nomeAtleta, saltoAtleta, mediaAtleta, quantidadeAtleta);

    return 0;
}
