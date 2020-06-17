/******************************************************************************
É comum que um programa seja capaz de realizar a ordenação de elementos ou dados
de forma a facilitar as operações futuras e apresentações deste conjunto de 
dados. Assim sendo, escreva um programa que leia um vetor A e o apresente em
ordem decrescente.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int A[5], i, j, troca;
    for(i=0; i<5; i++)
    {
        printf("Informe um número para a posição %d do vetor: ", i+1);
        scanf("%d",&A[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
         if(A[i] < A[j])
         {
             troca = A[i];
             A[i] = A[j];
             A[j] = troca;
         }
        }
    }
    printf("O valor do vetor em ordem decrescente é: ");
    for(i=0; i<5; i++)
    {
        printf("\n%d", A[i]);
    }
    return 0;
}
