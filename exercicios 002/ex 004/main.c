#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escreva um algoritmo em Linguagem C para determinar se um dado n�mero N (recebido atrav�s do teclado) � POSITIVO, NEGATIVO ou NULO.

    int a;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    if (a >= 1){
        printf("O n�mero digitado � POSITIVO!");
    }
    else if (a < 0){
        printf("O n�mero digitado � NEGATIVO!");
    }
    else {
        printf("O n�mero digitado � NULO!");
    }
    return 0;
}
