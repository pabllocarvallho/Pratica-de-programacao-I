#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Escrever um algoritmo que leia o nome de um vendedor, o seu sal�rio fixo e o total
   de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15%
   de comiss�o sobre suas vendas efetuadas, informar o seu nome, o sal�rio fixo e sal�rio
   no final do m�s.*/

   char nome="";
   float salariof, total_vendas, salariofm, comissao;

   printf("Digite seu nome: \n");
   scanf("%s", &nome);

   printf("Digite o seu salario fixo: \n");
   scanf("%f", &salariof);

   printf("Digite o total de vendas efetuadas no m�s: \n");
   scanf("%f", &total_vendas);

   comissao = total_vendas * 0.15;

   salariofm = salariof + comissao;

   printf("\nO seu nome � : %s", nome);
   printf("\nO seu salario fixo �: %f", salariof);
   printf("\nO seu salario no final do m�s � igual a: %f", salariofm);

   return 0;

}
