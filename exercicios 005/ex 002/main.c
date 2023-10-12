#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Construa um algoritmo em Linguagem C que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja maior que 10, apresentá-lo.

    int a, b, soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);

    printf("Digite o segundo valor: \n");
    scanf("%d", &b);

    soma = a + b;

    if(soma > 10){
        printf("A soma dos valores é igual a: %d\n", soma);
    } else {
        printf("A soma dos valores é menor ou igual a 10!");
    }
    return 0;
}
