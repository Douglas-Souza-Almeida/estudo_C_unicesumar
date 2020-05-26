/*Nada melhor do que uma máquina para realizar tarefas repetitivas, evitando esforço humano desnecessário.
Assim sendo, elabore um programa que leia uma frase e o número de vezes que deseja imprimí-la.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int i, x;
    char a[50];
    printf("Digite a frase: ");
    gets(a);
    printf("Informe quantas vezes deseja imprimir: ");
    scanf("%d",&i);
    for(x=1; x<=i; x++){
        printf("%s\n",a);
    }
    return 0;
}