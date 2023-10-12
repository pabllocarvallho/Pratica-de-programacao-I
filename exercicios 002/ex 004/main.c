#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Escreva um algoritmo em Linguagem C para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO.

    int a;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    if (a >= 1){
        printf("O número digitado é POSITIVO!");
    }
    else if (a < 0){
        printf("O número digitado é NEGATIVO!");
    }
    else {
        printf("O número digitado é NULO!");
    }
    return 0;
}
