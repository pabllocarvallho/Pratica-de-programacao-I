#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*A Loja InfoTech está vendendo seus produtos em 5(cinco) prestações sem juros.
     Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.   */

     float valor, prestacao;

     printf("Digite o valor do produto a ser divido em 5x sem juros: \n");
     scanf("%f", &valor);

     prestacao = valor / 5;

     printf("O valor da prestação é 5x de: R$ %.2f\n", prestacao);
}
