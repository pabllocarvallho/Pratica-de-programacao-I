#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Fa�a um algoritmo que receba um valor que foi depositado e exiba o
    valor com rendimento ap�s um m�s. Considere fixo o juro da poupan�a em 0,70% a.m. */

    float deposito, rendimento;

    printf("Calculadora de rendimento fixo 0.70% \n");

    printf("\nDigite um valor a se depositar: \n");
    scanf("%f", &deposito);

    rendimento = (deposito * 0.70)/100;

    printf("O valor do rendimento ap�s 30 dias �: %.2f\n", rendimento+deposito);


}
