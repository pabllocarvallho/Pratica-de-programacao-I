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

    float valor_fabrica, percen_distrib, impostos, valor_final;

    printf("digite o custo de fabrica de um carro novo: \n");
    scanf("%f", &valor_fabrica);

    impostos = (valor_fabrica * 0.45);

    percen_distrib = (valor_fabrica * 0.28);

    valor_final = valor_fabrica+impostos+percen_distrib;

    printf("\nO valor final do carro �: R$ %.2f\n", valor_final);


}
