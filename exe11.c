/*
11. Elabore um programa que permita o armazenamento dos seguintes produtos de um supermercado:
  Eletrodomésticos			            Perecíveis
  nome				                      nome    			
  modelo				                    nome do produtor
  tempo de garantia (em anos)  	    validade (em dias) 
Podem ser armazenados até 5 eletrodomésticos e 5 perecíveis. Solicite ao usuário a quantidade de eletrodomésticos a serem cadastrados e faça o seu cadastro. Faça o mesmo com os perecíveis. Ao final, liste todos os produtos cadastrados.
*/

#include<stdio.h>

typedef struct {
    char nome[50];
    int modelo, validadeGarantia;
} produtos;

//Pegar quantidade eletrodomesticos ou pereciveis
int informaQuantidade(char c[]) {
    int n;
    do {
        printf("Digite a quantidade de %s a serem cadastrados: ", c);
        scanf("%d", &n);
        if ((n < 0) || (n > 5))
            printf("\n\nDigite um numero de 1 a 5!\n\n");
    } while ((n < 0) || (n > 5));
    return n;
}
//Armazenar eletrodomesticos ou pereciveis
void armazenaQuantidade(int n, produtos produto[5]) {
    int i;
    for (i=0; i<n; i++) {
        printf("Produto %d\n", i+1);
        printf("Nome: ");
        scanf("%s", produto[i].nome);
        printf("Modelo: ");
        scanf("%d", &produto[i].modelo);
        printf("Validade Eletrodomesticos (anos) ou Garantia Pereciveis (dias): ");
        scanf("%d", &produto[i].validadeGarantia);
        printf("\n\n");
    }
}
//Apresenta eletrodomesticos ou perecíveis na tela
void apresentaProdutos(int n, produtos produto[5], char c[]) {
    int i;
    printf("%s:\n", c);
    for (i=0; i<n; i++) {
        printf("\nProduto %d\nNome: %s\nModelo: %d\nValidade ou garantia: %d", i+1, produto[i].nome, produto[i].modelo, produto[i].validadeGarantia);
        printf("\n");
    }
    printf("\n");
}

//Algorítimo principal
int main(void) {
    int qE, qP;
    produtos e[5], p[5];

    qE = informaQuantidade("eletrodomesticos");
    armazenaQuantidade(qE, e);
    qP = informaQuantidade("pereciveis");
    armazenaQuantidade(qP, p);
    apresentaProdutos(qE, e, "eletrodomésticos");
    apresentaProdutos(qP, p, "pereciveis");

    return 0;
}