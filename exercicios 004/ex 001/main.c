#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Escreva um programa que solicite ao usu�rio tr�s notas, calcule a m�dia aritm�tica dessas notas e a exiba na tela.

    float a, b, c, media;

    printf("Calculadora de M�dia! \n");

    printf("Digite a nota 1: \n");
    scanf("%f", &a);

    printf("Digite a nota 2: \n");
    scanf("%f", &b);

    printf ("Digite a nota 3: \n");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("A m�dia das notas �: %.2f\n", media);


    return0;
}


