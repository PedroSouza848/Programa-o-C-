#include <stdio.h>

int main() {
    //Carta 01
    char estado1, codigo1[10], nome1[50];
    float area1, pib1, densi1, pibper1;
    int ponturis1, populacao1;

    //Carta 02
    char estado2, codigo2[10], nome2[50];
    float area2, pib2, densi2, pibper2;
    int ponturis2, populacao2;

    printf("-=--=--=--=--=--=--=--=--=--=--=-\n");
    printf(" Bem vindo ao cadastro de cartas!\n");
    printf("-=--=--=--=--=--=--=--=--=--=--=-\n");
    printf("Vamos começar com a carta nº01:\n");
    printf(" \n");

    printf("Informe o estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("\nAgora, informe o código(A letra do estado e um número de 01 a 04): ");
    scanf("%s", codigo1);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome1);

    printf("\nInforme qual a população da cidade: ");
    scanf("%d", &populacao1);

    printf("\nInforme a área da cidade: ");
    scanf("%f", &area1);

    printf("\nInforme o PIB: ");
    scanf("%f", &pib1);

    printf("\nPor fim, informe o número de pontos turísticos: ");
    scanf("%d", &ponturis1);

    densi1 = populacao1 / area1;
    pibper1 = pib1 / populacao1;

    printf("\n-=--=--=--=--=--=--=--=--=--=--=---=---=---=-\n");
    printf("Parabéns, você chegou ao fim do 1º cadastro!\n");
    printf("-=--=--=--=--=--=--=--=--=--=--=---=---=---=-\n");
    system("clear");

    printf("-=--=--=--=--=--=--=--=--=-\n");
    printf(" Vamos para a carta nº02:!\n");
    printf("-=--=--=--=--=--=--=--=--=-\n");
    printf(" \n");

    printf("Informe o estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("\nAgora, informe o código(A letra do estado e um número de 01 a 04): ");
    scanf("%s", codigo2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome2);

    printf("\nInforme qual a população da cidade: ");
    scanf("%d", &populacao2);

    printf("\nInforme a área da cidade: ");
    scanf("%f", &area2);

    printf("\nInforme o PIB: ");
    scanf("%f", &pib2);

    printf("\nPor fim, informe o número de pontos turísticos: ");
    scanf("%d", &ponturis2);

    densi2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    printf("\n-=--=--=--=--=--=--=--=--=--=--=---=---=---=-\n");
    printf("Parabéns, você chegou ao fim do 2º cadastro!\n");
    printf("-=--=--=--=--=--=--=--=--=--=--=---=---=---=-\n");
    system("clear");

    printf("\n-=--=--=--=--=--=--=--=--=--=--=---=---=--\n");
    printf(" Agora, vamos ver como ficaram suas cartas! \n");
    printf("-=--=--=--=--=--=--=--=--=--=--=---=---=---=-\n");

    printf("CARTA 01:\n");
    printf("Estado: %c",estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %d habitantes", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", ponturis1);
    printf("\nDensidade popuacional: %.2f", densi1);
    printf("\nPIB per Capita: %.2f", pibper1);
    printf("\n");

    printf("\nCARTA 02:\n");
    printf("Estado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da cidade: %s", nome2);
    printf("\nPopulação: %d habitantes", populacao1);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", ponturis2);
    printf("\nDesidade populacional: %.2f", densi2);
    printf("\nPIB per Capita: %.2f \n", pibper2);
    return 0;
}