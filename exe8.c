/*
08. Faça um programa que armazene a matrícula, o nome e o salário de 5 funcionários. Calcule a média salarial dos funcionários e apresente na tela os dados dos funcionários que possuem salário abaixo da média.
*/

#include<stdio.h>
#define N_FUNCIONARIO 5

typedef struct {
    int matricula;
    char nome[50];
    float salario;
} funcionario;

int main(void) {
    int i;
    float somaSalario=0, mediaSalario;
    funcionario f[N_FUNCIONARIO];

    //Recolhe valores
    for (i=0; i<N_FUNCIONARIO; i++) {
        printf("Funcionario %d\n", i+1);
        printf("Matricula: ");
        scanf("%d", &f[i].matricula);
        printf("Nome: ");
        scanf("%s", f[i].nome);
        printf("Salario: ");
        scanf("%f", &f[i].salario);
        printf("\n\n");
        somaSalario += f[i].salario;
    }

    //Calcula média salarial
    mediaSalario = somaSalario/N_FUNCIONARIO;

    //Apresenta funcionarios baixo media salarial
    printf("Funcionarios com salario abaixo da media: %.2f\n", mediaSalario);
    for (i=0; i<N_FUNCIONARIO; i++)
        if (f[i].salario < mediaSalario)
            printf("Funcionario: %s\nMatricula: %d\nSalario: R$%.2f\n\n", f[i].nome, f[i].matricula, f[i].salario);

    return 0;
}