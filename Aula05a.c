//Operadores matemáticos no programa C
//Operadores aritméticos (+,-,*,/)
#include <stdio.h>

int main() {
    int num1,num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o 1º número:");
    scanf("%d",&num1);
    printf("\nAgora, digite o 2º número:");
    scanf("%d", &num2);
    printf(" \n");

    //Operação soma
    soma = num1 + num2;

    //Operação subtrção
    subtracao = num1 - num2;

    //Operação multiplicação
    multiplicacao = num1 * num2;

    //Operação divisão
    divisao = num1 / num2;

    printf("A soma entre %d e %d é igual a: %d",num1,num2,soma);
    printf("\nA subtração entre %d e %d é igual a: %d",num1,num2,subtracao);
    printf("\nA multiplicação entre %d e %d é igual a: %d",num1,num2,multiplicacao);
    printf("\nA divisão entre %d e %d é igual a: %d\n",num1,num2,divisao);
}