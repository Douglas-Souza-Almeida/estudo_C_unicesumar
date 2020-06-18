/******************************************************************************
Um dos principais benefícios de aprender a programar é o fato de que é possível
automatizar tarefas repetitivas. Dessa forma, faça um programa que leia uma 
palavra e o número de vezes que se deseja imprimi-la.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define max 15
int main()
{
    setlocale(LC_ALL,"");
    char palavra [max];
    int i, x;
    printf("Digite uma palavra: ");
    gets(palavra);
    printf("\nInforme quantas vezes deseja que esta palavra seja impressa na tela: ");
    scanf("%d",&i);
    printf("\n\tRealizando a impressão:");
    for(x=0; x<i; x++)
    {
        printf("\n%d-%s", x+1, palavra);
    }
    return 0;
}
