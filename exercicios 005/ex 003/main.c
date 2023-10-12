#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Construa um algoritmo em Linguagem C que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR

    int a;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("O numero inteiro é PAR!");
    } else {
        printf("O numero inteiro é ÍMPAR!");
    }

    return 0;
}
