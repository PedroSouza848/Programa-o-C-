//Comandos para entrada e saída de dados no C: printf e scanf
//printf: Exibe uma mensagemna tela(Igual o 'print' do Python)

#include <stdio.h>

int main() {
    int idade = 21;
    float altura = 1.81;
    char opção = 'P';
    char nome[20] = "Pedro";

    printf("A idade de %s é de %d anos\n", nome, idade);
    printf("A altura é de %.2f metros\n", altura);
    printf("A opção foi a letra %c\n", opção);
}

// %d: Imprime um int no formato decimal
// %i: Equivalente a %d
// %f: Imprime um número flutuante no formato padrão
// %e Imprime um número flutuante na notação científica
// %c Imprime um único caractere
// %s Imprime uma cadeia (string) de caracteres