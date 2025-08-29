//Operadores de atribuição: (Para atribuir valores as variáveis)
//Atribuição simples: (=)
//Atribuição com soma: (+=)
//Atribuição com subtração: (-=)
//Atribuição com Multiplicação: (*=)
//Atribuição com divisão: (/=)
#include <stdio.h>

int main() {

    int num1 =10, num2, resultado;

    resultado = 10;
    printf("Resultado: %d \n",resultado);

    //resultado = resultado +20
    resultado += 20;
    printf("Resultado: %d \n",resultado);

    //resultado = resultado - num1
    resultado -= num1;
    printf("Resultado: %d \n",resultado);

    //resultado = resultado * 5
    resultado *= 5;
    printf("Resultado: %d \n",resultado);

    //resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d \n",resultado);

}