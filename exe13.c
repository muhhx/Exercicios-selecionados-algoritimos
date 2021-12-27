/*
13. Elabore o cadastro de 5 compradores de uma loja de acordo com o seguinte formato:
  •	Nome
  •	Telefone
  •	Endereço residencial
  •	Endereço comercial
  Sabendo que o endereço possui o seguinte formato:
  •	Rua
  •	Número
  •	Bairro
  •	CEP
  A seguir, leia o nome de uma rua e apresente na tela todos os compradores que possuem endereço residencial ou comercial nesta rua.
*/

//Informações básicas;
#include<stdio.h>
#include<string.h>

#define N_COMPRADOR 1

typedef struct {
    char rua[50], bairro[30];
    int numero, cep;
} varEndereco;

typedef struct {
    char nome[50];
    int telefone;
    varEndereco e[2];
} varComprador;

//Funções e procedimentos
void lerInformacoesCompradores(varComprador c[N_COMPRADOR]) {
    int i, j;
    for (i=0; i<N_COMPRADOR; i++) {
        printf("\nComprador %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", c[i].nome);
        printf("Telefone: ");
        scanf("%d", &c[i].telefone);
        for(j=0; j<2; i++) {
            if (j==0)
                printf("\nEndereco Residencial:\n");
            else
                printf("\nEndereco Comercial:\n");
            printf("Rua: ");
            scanf("%s", c[i].e[j].rua);
            printf("Numero: ");
            scanf("%d", &c[i].e[j].bairro);
            printf("Bairro: ");
            scanf("%s", c[i].e[j].bairro);
            printf("CEP: ");
            scanf("%d", &c[i].e[j].cep);
            printf("\n");
        }
    }
}
void apresentarDadosComprador (varComprador c[N_COMPRADOR]) {
    int i, j;
    for(i=0; i<N_COMPRADOR; i++)
        printf("\nNome: %s\nTelefone: %d\n", c[i].nome, c[i].telefone);
        for(j=0; j<2; j++) {
            if (j==0)
                printf("End. Residencial:\n");
            else
                printf("End. Comercial:\n");
            printf("\tRua: %s\n\tNumero: %d\n\tBairro: %s\n\tCEP: %d\n", c[i].e[j].rua, c[i].e[j].numero, c[i].e[j].bairro, c[i].e[j].cep);
        }
}
void compararRuaCompradores(varComprador c[N_COMPRADOR]) {
    int i, j;
    char comparador[50];
    printf("\nDigite o nome da rua que quer encontrar: ");
    scanf("%s", comparador);
    for (i=0; i<N_COMPRADOR; i++)
        for (j=0; j<2; j++) {
            if (strcmp(comparador, c[i].e[j].rua) == 0)
                apresentarDadosComprador(c);
        }
}

//Função principal
int main(void) {
    varComprador c[N_COMPRADOR];

    lerInformacoesCompradores(c);
    compararRuaCompradores(c);

    return 0;
}