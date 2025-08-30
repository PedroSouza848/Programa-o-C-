#include <stdio.h>

int main () {

    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("===================\n");
    printf(" CALCULO DE MÉDIA\n");
    printf("===================\n");
    printf(" \n");
    printf("Vamos agora calcular a sua média escolar!\n");
    printf("Informe a sua 1º nota: ");
    scanf("%f", &nota1);
    printf("\nÓtimo, agora informe a 2º nota: ");
    scanf("%f", &nota2);
    printf("\nPor fim, informe a 3º nota: ");
    scanf("%f", &nota3);
    printf("\nCalculando média......\n");
    media = (nota1 + nota2 + nota3) /3;
    printf("A sua média escolar é: %.2f, Ótimo trabalho!\n", media);
    return 0;



}
