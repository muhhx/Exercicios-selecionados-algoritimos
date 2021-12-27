/*
10. Elabore um programa que armazene a matrícula, o nome e a ano de nascimento de 10 pessoas. A seguir:
  1.	Apresente a matrícula, o nome e a idade das pessoas cadastradas.
  2.	Apresente a idade média das pessoas cadastradas.
  3.	Apresente os dados das pessoas cujo ano de nascimento é igual ou superior a um ano informado pelo teclado.
*/

#include<stdio.h>
#define N_PESSOAS 2
typedef struct {
    int matricula, ano;
    char nome[50];
} cadastro;

//Funções e procendimentos
void armazenaValores(cadastro p[N_PESSOAS]) {
    int i;
    for (i=0; i<N_PESSOAS; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %s", p[i].nome);
        printf("Matricula: ");
        scanf(" %d", &p[i].matricula);
        printf("Ano nascimento: ");
        scanf(" %d", &p[i].ano);
        printf("\n\n");
    }
}
void apresentaTodos(cadastro p[N_PESSOAS]) {
    int i;
    printf("\n\n");
    for (i=0; i<N_PESSOAS; i++)
        printf("%s\nMatricula: %d\nAno de nascimento: %d\nIdade: %d\n\n", p[i].nome, p[i].matricula, p[i].ano, 2021-p[i].ano);
}
void apresentaIdadeMedia(cadastro p[N_PESSOAS]) {
    int i, somaAno=0;
    printf("\n\n");
    for (i=0; i<N_PESSOAS; i++)
        somaAno += (2021 - (p[i].ano));
    printf("Idade media das pessoas cadastradas: %d", somaAno/N_PESSOAS);
}
void apresentaAnoSuperior(cadastro p[N_PESSOAS]) {
    int i, anoInformado;
    printf("\n\nDigite um ano: ");
    scanf("%d", &anoInformado);
    for (i=0; i<N_PESSOAS; i++)
        if (p[i].ano >= anoInformado)
            printf("\n%s\nMatricula: %d\nAno de nascimento: %d\nIdade: %d\n\n", p[i].nome, p[i].matricula, p[i].ano, 2021-p[i].ano);
}

//Algorítimo principal
int main(void) {
    int i;
    cadastro p[N_PESSOAS];

    armazenaValores(p);
    apresentaTodos(p);
    apresentaIdadeMedia(p);
    apresentaAnoSuperior(p);

    return 0;
}