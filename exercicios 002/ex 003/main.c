#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Construa um algoritmo em Linguagem C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do teclado) � PAR ou �MPAR

    int a;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("O numero inteiro � PAR!");
    } else {
        printf("O numero inteiro � �MPAR!");
    }

    return 0;
}
