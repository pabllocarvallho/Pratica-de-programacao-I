#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*A Loja InfoTech est� vendendo seus produtos em 5(cinco) presta��es sem juros.
     Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es.   */

     float valor, prestacao;

     printf("Digite o valor do produto a ser divido em 5x sem juros: \n");
     scanf("%f", &valor);

     prestacao = valor / 5;

     printf("O valor da presta��o � 5x de: R$ %.2f\n", prestacao);
}
