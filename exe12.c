/*
12. Construa um programa que permita o cadastro do nome, telefone e email de 5 pessoas. Após a leitura dos dados: 
  1.	Consulte os dados de uma pessoa (com base em um nome fornecido pelo usuário)
  2.	Exclua uma pessoa (com base em um nome fornecido pelo usuário)
  3.	Liste todos as pessoas cadastradas
*/

#include<stdio.h>
#include<string.h>

#define MAX 2
typedef struct {
    char nome[50], email[50];
    int telefone;
} pessoas;

void leituraDados(pessoas p[MAX]) {
    int i;
    for (i=0; i<MAX; i++) {
        printf("Pessoa %d\n", i+1);
        printf("Nome: ");
        scanf("%s", p[i].nome);
        printf("Telefone: ");
        scanf("%d", &p[i].telefone);
        printf("Email: ");
        scanf("%s", p[i].email);
        printf("\n\n");
    }
}
int menuPrincipal() {
    int op, i;
    do {
        printf("\n~Menu");
        printf("\n1. Consultar dados de uma pessoa");
        printf("\n2. Excluir pessoa");
        printf("\n3. Listar todas as pessoas cadastradas");
        printf("\n4. Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);
        if ((op<0) || (op>4))
            printf("\n\nOpcao Invalida!\n");
    } while ((op<0) || (op>4));
    return op;
}
void consultaPessoa(pessoas p[MAX]) {
    int i, c=0;
    char nomeConsulta[50];
    printf("\n\nOpcao 01\nDigite o nome da pessoa que deseja consultar: ");
    scanf("%s", &nomeConsulta);
    for (i=0; i<MAX; i++)
        if (strcmp(nomeConsulta, p[i].nome) == 0) {
            printf("\nNome: %s\nTelefone: %d\nEmail: %s\n", p[i].nome, p[i].telefone, p[i].email);
            c = 1;
        }
    if (c==0)
        printf("\n\nNome nao encontrado!\n\n");
}
void deletaVetor(pessoas p[MAX], int i) {
    int j;
    //Fazer procedimento de deletar vetor
}
void excluiPessoa(pessoas p[MAX]) {
    int i, c=0;
    char nomeDeletar[50];
    printf("\n\nOpcao 02\nDigite o nome da pessoa que deseja deletar: ");
    scanf("%s", &nomeDeletar);
    for (i=0; i<MAX; i++)
        if (strcmp(nomeDeletar, p[i].nome) == 0) {
            deletaVetor(p, i);
            c = 1;
        }
    if (c==0)
        printf("\n\nNome nao encontrado!\n\n");
}
void listaPessoa(pessoas p[MAX]) {
    int i;
    for (i=0; i<MAX; i++)
        printf("\nNome: %s\nTelefone: %d\nEmail: %s\n", p[i].nome, p[i].telefone, p[i].email);
}

int main(void) {
    pessoas p[MAX];
    int op;

    leituraDados(p);
    
    do {
        op = menuPrincipal();
        switch (op) {
            case 1: consultaPessoa(p); break;
            case 2: excluiPessoa(p); break;
            case 3: listaPessoa(p);
        }
    } while (op!=4);

    return 0;
}
