#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Escrever um algoritmo para determinar o consumo m�dio de um autom�vel sendo fornecida
     a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.*/

    float dist, consu, resul;

    printf("Consumo m�dio de um autom�vel! \n");

    printf("\nDigite a distancia total percorrida em KM: \n");
    scanf("%f", &dist);

    printf("Digite o total de combustivel gasto em litros: \n");
    scanf("%f", &consu);

    resul = dist / consu;

    printf("O consumo m�dio do automovel �: %.2f", resul);

    return 0;

}
