/*Construa um algoritmo que leia números inteiros até que seja digitado um valor
negativo. Ao final, informe a média dos números, o maior e o menor valor*/

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int cont, i, num, menor, maior;
    float soma;
    i = 0;
    soma = 0;
    cont = 0;
    while(cont >= 0){
        printf("Informe um nÃºmero inteiro positivo para continuar ou um nÃºmero negativo para encerrar: ");
        scanf("%d",&num);
        cont=num;
        i = i+1;
        
        if(num >= 0){
            soma = soma + num;
            if(num > maior){
            maior = num;
            }
            if (num < menor){
            menor = num;
            }
        }
    }
    printf("\nA média dos nÃºmeros inteiros positivos digitados é: %.2f.", soma/i);
    printf("\nO mair número digitado foi: %d.", maior);
    printf("\nO menor número digitado foi: %d.", menor);
}
