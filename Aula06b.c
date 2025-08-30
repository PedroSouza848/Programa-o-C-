#include <stdio.h>

int main() {

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;  //Divisão de ponto flutuante!!!

    printf("A soma é igual a: %.2f", soma);
    printf("\nA diferença é igual a: %.2f", diferenca);
    printf("\nO produto é igual a: %.2f", produto);
    printf("\nO quociente é igual a: %.2f \n", quociente);

}