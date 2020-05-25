/*Para os seres humanos, trabalhar com s�ries num�ricas sem o aux�lio de ferramentas computacionais pode ser um grande transtorno. Assim sendo, construa um
programa que leia o n�mero de termos da s�rie e imprima o valor de S.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, x;
    float s, d;
    s = 0;
    printf("Digite um n�mero de termo para c�lculo da s�rie: ");
    scanf("%d",&num);
   for(x=1; x<=num; x++){
       d = x;
       s = s + 1/d;
    }
    printf("\nO valor de S para o n�mero informado �: %.2f", s);
    return 0;
}