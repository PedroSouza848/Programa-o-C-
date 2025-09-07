//Aqui, vamos comparar variáveis de tipos diferentes porém, faremos uma conversão EXPLICITA
#include <stdio.h>

int main () {

    float num1 = 10.2;
    int num2 = 10;

    printf("Número1 > Número2: %d \n", (int) num1 > num2); //Desse modo, ele só vai comparar a parte inteira do número
    printf("Número1 == Número2: %d \n", (int) num1 == num2);

    return 0;
}