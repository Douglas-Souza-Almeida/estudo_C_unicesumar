/*Imagine que voc� esteja ensinando a tabuada para uma crian�a e precisa mostrar a ela todas as poss�veis multiplica��es entre 
os n�meros que v�o de um at� dez. Assim, elabore um programa que imprima a tabuada do um ao dez.*/

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