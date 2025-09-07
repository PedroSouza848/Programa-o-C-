//Modificadores de tipo de dados
//int: -2,147,483,648 a 2,147,483,647
//unsigned int: 0 a 4,294,967,295
//char: -128 a 127
//unsigned char: 0 a 255
#include <stdio.h>

int main() {
    int NumeroSinal = 3000000000; //Esse valor excede o limite do int
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d \n", NumeroSinal);
    printf("Número sem sinal: %u \n", numeroSemSinal);

}