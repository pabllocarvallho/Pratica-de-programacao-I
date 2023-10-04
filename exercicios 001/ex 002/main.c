#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida
     a distância total percorrida pelo automóvel e o total de combustível gasto.*/

    float dist, consu, resul;

    printf("Consumo médio de um automóvel! \n");

    printf("\nDigite a distancia total percorrida em KM: \n");
    scanf("%f", &dist);

    printf("Digite o total de combustivel gasto em litros: \n");
    scanf("%f", &consu);

    resul = dist / consu;

    printf("O consumo médio do automovel é: %.2f", resul);

    return 0;

}
