#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda.
    Sabe-se que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.*/

    float produto, percentual, valor_venda;

    printf("Digite o valor do valor de custo do produto: \n");
    scanf("%f", &produto);

    printf("Digite o percentual incluido no valor do produto para venda: \n");
    scanf("%f", &percentual);

    valor_venda = (produto * percentual)/100;


    printf("O valor de venda do produto ser�: %.2f\n", valor_venda + produto);
}
