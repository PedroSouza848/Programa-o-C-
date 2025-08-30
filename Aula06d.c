//Conversão explícita (Recomendado!!)
#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;      //Esse (float) é para forçar o programa armazenar a variável como float!
    float quociente = (float) a / b; //'a' é explícitamente convertido para float!!
    //float quociente =  a / b; Nesse caso o resultado vai ser 3.00

    printf("Quociente: %.2f \n", quociente);
    return 0;
}