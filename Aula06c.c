//Conversão implícita
#include <stdio.h>

int main () {

    int a = 10;
    float b = 3.5;
    float resultado = a + b; //nesse caso, 'a' é convertido implicitamente de int para float!

    printf("Resultado: %.2f \n", resultado);
}