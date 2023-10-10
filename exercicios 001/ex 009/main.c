#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*O custo ao consumidor de um carro novo � a soma do custo de f�brica
    com a percentagem do distribuidor e dos impostos (aplicados, primeiro os
    impostos sobre o custo de f�brica, e depois a percentagem do distribuidor
    sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% e
    os impostos 45%. Escrever um algoritmo que leia o custo de f�brica de um carro
    e informe o custo ao consumidor do mesmo.*/

    float valor_fabrica, percen_distrib, impostos;

    printf("Digite o valor de fabrica do carro a ser comprado: \n");
    scanf("%f", &valor_fabrica);

    impostos = (valor_fabrica * 0,45)/100;
    percen_distrib = (impostos + valor_fabrica * 0,28)/100;

    printf("O valor do carro a ser comprado: %.2f\n",percen_distrib + valor_fabrica);

}
