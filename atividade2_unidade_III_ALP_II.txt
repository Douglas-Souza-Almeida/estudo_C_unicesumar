/*Para os seres humanos, trabalhar com séries numéricas sem o auxílio de ferramentas computacionais pode ser um grande transtorno. Assim sendo, construa um
programa que leia o número de termos da série e imprima o valor de S.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, x;
    float s, d;
    s = 0;
    printf("Digite um número de termo para cálculo da série: ");
    scanf("%d",&num);
   for(x=1; x<=num; x++){
       d = x;
       s = s + 1/d;
    }
    printf("\nO valor de S para o número informado é: %.2f", s);
    return 0;
}