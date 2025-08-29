//Operadores de incremento e decremento:(Usados para diminuir ou aumentar o valor de uma unidade em uma variável) 
//Operador de incremento: (++)
//Operador de decremento: (--)
//Bastante usados em loopings
#include <stdio.h>

int main() {

    int num1 = 1, resultado;
    printf("Antes do incremento: %d \n",num1);

    //num1 = num1 + 1
    //num1 += 1 (Usando operador de atribuição)
    num1++;
    printf("Pós-incremento: %d \n",num1);

    //num1 = num1 - 1
    //num1 -= 1 (Usando operador de atribuição)
    num1--;
    printf("Pós-decremento: %d \n",num1);
    printf("\n ");
    printf("\n ");
    printf("\n ");

    resultado = num1++; //Aqui ele exibe primeiro e incrementa depois
    printf("Após Pós-incremento: - Núm1:%d - Resultado:%d \n",num1,resultado);

    resultado = ++num1; //Aqui ele incrementa primeiro e exibe depois
    printf("Após Pré-incremento: - Num1:%d - Resultado:%d \n",num1, resultado);

    //O mesmo vale para o decremento:
    
    resultado = num1--; //Aqui ele exibe primeiro e decrementa depois
    printf("Após Pós-decremento: - Núm1:%d - Resultado:%d \n",num1,resultado);

    resultado = --num1; //Aqui ele decrementa primeiro e exibe depois
    printf("Após Pré-decremento: - Num1:%d - Resultado:%d",num1, resultado);
}