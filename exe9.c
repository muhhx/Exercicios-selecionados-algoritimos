/*
09. Elabore um programa que armazene em uma agenda o nome, o endereço e o telefone de 10 pessoas. Após a leitura de todos os dados, leia do teclado um nome a ser buscado nesta agenda. Se o nome for encontrado, apresente todos os dados da pessoa na tela. Senão, apresente a mensagem “Nome não cadastrado”.
*/

#include<stdio.h>
#include<string.h>

#define N_PESSOAS 10
typedef struct {
    char nome[50], endereco[50];
    int telefone;
} agenda;

int main(void) {
    char buscaNome[50];
    int i, buscaContador=0;
    agenda p[N_PESSOAS];

    //Recolhe dados
    for (i=0; i<N_PESSOAS; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %s", p[i].nome);
        printf("Endereco: ");
        scanf(" %s", p[i].endereco);
        printf("Telefone: ");
        scanf("%d", &p[i].telefone);
        printf("\n\n");
    }
    
    //Busca dados e apresenta
    do {
        printf("\nDigite um nome a ser buscado: ");
        scanf("%s", buscaNome);
        for (i=0; i<N_PESSOAS; i++)
            if (strcmp(buscaNome, p[i].nome) == 0) {
                printf("\nNome: %s\nEndereco: %s\nTelefone: %d", p[i].nome, p[i].endereco, p[i].telefone);
                buscaContador += 1;
            }
        if (buscaContador == 0)
            printf("\n\nNome não cadastrado!\n\n");
    } while (buscaContador == 0);
    printf("\n\nFim do programa!\n\n");

    return 0;
}