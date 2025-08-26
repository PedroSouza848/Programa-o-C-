#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[20];

    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    
    printf("Informe sua altura: \n");
    scanf("%f", &altura);

    printf("Informe o seu 1º nome: \n");
    scanf("%s", nome);

    printf("Informe sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n",nome);
    printf("Matricula do aluno: %d\n", matricula);
    printf("Altura do aluno: %.2f\n", altura);
    printf("Idade do aluno: %d", idade);


}