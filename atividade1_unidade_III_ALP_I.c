/*Escreva um algoritmo que leia a quantidade de números que se deseja digitar. Em
seguida, leia esses números e encontre o maior e o menor.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int maior, menor, qtd, cont, num;
    
    printf("Informe a quantidade de números que será analisado: ");
    scanf("%d",&qtd);
    cont = 1;
    printf("Informe um número: ");
    scanf("%d",&num);
    maior = num;
    menor = num;
    while(cont < qtd){
         printf("Informe outro número: ");
         scanf("%d",&num);
        if (num > maior){
            maior = num;
        }else{
        if (num < menor){
            menor = num;
        }
        }
    cont = cont + 1;
    }
    printf("\nO maior valor digitado foi: %d", maior);
    printf("\nO menor valor digitado foi: %d", menor);
    return 0;
}
