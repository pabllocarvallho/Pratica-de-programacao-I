#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Escreva um algoritmo em Linguagem C que leia um n�mero e o imprima caso ele seja maior que 20.

    float valor;

    printf("Digite um valor: \n");
    scanf("%f", &valor);

    if(valor > 20){
        printf("O valor digitado � igual a: %.2f\n", valor);
    } else {
        printf("O valor digitado � menor ou igual a 20!");
    }

    return 0;
}
