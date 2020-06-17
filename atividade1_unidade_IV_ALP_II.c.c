/******************************************************************************
A computação, frequentemente, é utilizada para servir de ferramenta na 
identificação de diferenças ou semelhanças entre objetos. Dessa forma, faça um 
programa que leia dois vetores A e B e apresente a quantidade de posições que 
possuem elementos diferentes entre um vetor e o outro.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int A[5], B[5], i, cont;
    for (i = 0; i < 5; i++)
    {
        printf("\nInforme o número correspondente a posição %d do vetor A: ", i+1);
        scanf("%d",&A[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nInforme o número correspondente a posição %d do vetor B: ", i+1);
        scanf("%d",&B[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if(A[i] != B[i])
        {
            cont++;
        }
    }
    printf("\nA quantidade de posições que possuem elementos diferentes, entre os vetores A e B é de %d itens.", cont);
    return 0;
}
