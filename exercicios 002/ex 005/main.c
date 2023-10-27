#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*Construir um algoritmo em Linguagem C que leia dois números e efetue a adição.
    Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
     mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
     subtraindo-se 5.*/

     int a, b, soma;

     printf("Digite um valor inteiro para a: \n");
     scanf("%d", &a);

     printf("Digite um valor inteiro para b: \n");
     scanf("%d", &b);

     soma = a + b;

     if (soma > 20){
        printf("O valor da soma dos 2 valores é: %d\n", soma + 8);
     } else if (soma <= 20){
        printf("O valor da soma dos 2 valores é: %d\n", soma - 5 );
     }


    return 0;
}
