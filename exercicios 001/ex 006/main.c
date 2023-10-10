#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Faça um algoritmo que receba um valor que foi depositado e exiba o
    valor com rendimento após um mês. Considere fixo o juro da poupança em 0,70% a.m. */

    float deposito, rendimento;

    printf("Calculadora de rendimento fixo 0.70% \n");

    printf("\nDigite um valor a se depositar: \n");
    scanf("%f", &deposito);

    rendimento = (deposito * 0.70)/100;

    printf("O valor do rendimento após 30 dias é: %.2f\n", rendimento+deposito);


}
