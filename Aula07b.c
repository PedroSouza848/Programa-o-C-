//Modificador long: Aumenta a capacidade de armazenar dados. (int e double)
#include <stdio.h>

int main() {

    int NumeroNormal = 2147483647; //Valor máximo de int
    long int NumeroGrande = 2147483647;

    printf("Número regular (int): %d \n",NumeroNormal);
    printf("Número grande (long int): %ld \n", NumeroGrande);

    NumeroGrande = 2147483648; //Valor maior que o maximo de int
    printf("Numero grande atualizado: %ld \n",NumeroGrande);
}