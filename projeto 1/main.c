#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, area;

    //Imprime informa��es para o usu�rio
    printf ("Programa que calcula");
    printf ("area de um circulo.\n");
    printf ("Digite o raio: ");

    //L� dado de entrada
    scanf ("%f", &raio);

    //calcula area
    area = 3.14159 * raio * raio;

    //Imprime resuldado
    printf ("Area do circulo: %f", area);
    return 0;


}
