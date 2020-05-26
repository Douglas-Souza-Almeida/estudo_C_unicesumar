/*Imagine que você esteja ensinando a tabuada para uma criança e precisa mostrar a ela todas as possíveis multiplicações entre 
os números que vão de um até dez. Assim, elabore um programa que imprima a tabuada do um ao dez.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i, j, r;
    printf;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            r = i * j;
            printf("\n%d X %d = %d\n", i, j, r);
        }
    }
    printf("Fim");
    return 0;
}