#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Ler uma temperatura em graus Celsius e apresentá-la convertida em
    graus Fahrenheit. A fórmula de conversão é: F=(9*C+160)/5, sendo F a
    temperatura em Fahrenheit e C a temperatura em Celsius. */

    float temp_c, temp_f;

    printf("Conversor de temperatura celsius para fahrenheit \n");

    printf("\nDigite uma temperatura em celsius: \n");
    scanf("%f", &temp_c);

    temp_f = (temp_c*9/5)+32;
    //temp_f = (9*temp_c+160)/5; "tambem funciona corretamente"


    printf("O valor da temperatura convertida em fahrenheit é: %.2f\n", temp_f);
}
