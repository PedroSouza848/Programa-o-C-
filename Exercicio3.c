//Hora de codar!! Gerenciamento de inventário
#include <stdio.h>

int main() {
    //Declarar variáveis como Produtos, Estoque, ValorUnitario e Total, Estoque minimo.
    char ProdutoA[30] = "Produto A";
    char ProdutoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int ResultadoA, ResultadoB;

    //Exibir as informações dos produtos
    printf("O Produto %s tem estoque de %u e o valor unitário é de R$%.2f \n", ProdutoA, estoqueA, valorA);
    printf("O Produto %s tem estoque de %u e o valor unitário é de R$%.2f \n", ProdutoB, estoqueB, valorB);

    //Compararar com o valor minimo do estoque
    ResultadoA = estoqueA > estoqueMinimoA;
    ResultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d \n", ProdutoA, ResultadoA); //Resultado vai dar 1, indicando que a condição é verdadeira
    printf("O produto %s tem estoque minimo %d \n", ProdutoB, ResultadoB); //Resultado vai dar 0, indicando que a condição é falsa

    //Comparação entre os valores totais dos produtos
    printf("O valor total de A(R$%.2f), é maior que o de B(R$%.2f)? %d \n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

     
    
}