//Como obter dados do usúario(O mesmo que o input do Python)
//scanf: lê os dados e armazena em uma variável (O input do Python)
//Ex: scanf("formato1","formato2",&variavel1,variavel2) (str não precisa usar o &)

#include <stdio.h>

int main() {
    int idade;
    float altura;
    char opção;
    char nome[20];

    printf("Por favor, informe sua idade:");
    scanf("%d", &idade);
    printf("A idade é de %d anos\n",idade);

    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é de %.2f metros\n", altura);

    printf("Escolha um caractere: ");
    scanf(" %c", &opção);
    printf("Você escolheu a letra %c\n", opção);

    printf("Por fim, informe seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é %s", nome);

}

// %d: Imprime um int no formato decimal
// %i: Equivalente a %d
// %f: Imprime um número flutuante no formato padrão
// %e Imprime um número flutuante na notação científica
// %c Imprime um único caractere
// %s Imprime uma cadeia (string) de caracteres