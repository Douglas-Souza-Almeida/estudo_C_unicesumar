﻿/*Elabore um algoritmo para apresentar todos os números divisíveis por 5 e menores
que 200.*/
#include <stdio.h>

int main()
{
    int i, num;
    char c;
    printf("Deseja que seja listado todos os números divisíveis por 5, menores que 200?\nDigite 'S' para sim ou 'N' para não: ");
    scanf(" %s",&c);
    if((c=='S') || (c=='s')){
        i=0;
        printf("\nOs números divisíveis por 5 são:");
        while(i < 199){
            num = num + 1;
            if(num % 5 == 0){
                
                printf("\n%d", num);
            }
            i = (i+1);
        }
    }else{
        printf("Fim.");
    }
    return 0;
}
