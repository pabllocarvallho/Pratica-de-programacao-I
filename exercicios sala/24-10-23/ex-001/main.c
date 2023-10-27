#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, quad;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    while ( num != 0){

        quad = num *num;

        printf("\nQuadrado de %d: %d", num,quad);

        printf("\nDigite um numero inteiro: \n");
        scanf("%d", &num);
    }

    return 0;
}
