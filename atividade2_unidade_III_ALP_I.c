/*Construa um algoritmo que leia números inteiros até que seja digitado 0. Calcule e
escreva o número de valores lidos, a média aritmética, a quantidade de números
pares e a quantidade de números ímpares..*/

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, impar, par, qtd, cont;
    float media, soma;
    num=1;
    cont=0;
    par=0;
    while(num != 0){
    printf("Informe um número: ");
    scanf("%d",&num);
    cont=cont+1;
    if(num!=0){
        if(num % 2 != 0){
            impar=impar+1;
        }
        if(num % 2 == 0){
            par=par+1;
        }
        soma=soma+num;
        media=(soma/cont);
    }
    }
    printf("\nO total de números lidos foi de: %d.", cont);
    printf("\nA média aritmética dos números informado é de: %f.", media);
    printf("\nA quantidade de números ímpares digitado foi de: %d.",impar);
    printf("\nA quantidade de números pares digitado foi de : %d.", par);
    return 0;
}

