//Quando comparamos variáveis de tipos diferentes (int com float), é realizado uma conversão implícita 
#include <stdio.h>

int main () {

    int a = 5;
    float b = 5.0;
    char c = 'a';

    printf("a >= b: %d \n", a >= b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d \n", a != b);

    printf("a >= c: %d \n", a >= c);
    printf("O valor ASCII de %c é %d: \n" c, c);
}