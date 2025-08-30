//Manipulação e conversão de dados
#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; //Note que a divisão de inteiros resulta em um número inteiro

    printf("A soma é igual a: %d",soma);
    printf("\nA diferença é igual a: %d",diferenca);
    printf("\nO produto é igual a: %d",produto);
    printf("\nO quociente é igual a: %d \n",quociente);
    return 0;
}