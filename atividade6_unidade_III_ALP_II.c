/*Nada melhor do que uma m�quina para realizar tarefas repetitivas, evitando esfor�o humano desnecess�rio.
Assim sendo, elabore um programa que leia uma frase e o n�mero de vezes que deseja imprim�-la.*/
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