/*� muito comum que programas tenham que implementar funcinalidades para identificar caracter�sticas espec�ficas e realizar
opera��es sobre um conjunto de dados. Dessa forma, fa�a um programa que apresenta a soma de todos os n�meros inteiros
�mpares, entre 200 e 500.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num, i, sum;
    printf("\nN�meros �mpares entre 200 e 500: ");
    for(num=1; num<=200; num++){
        i = num;
        if(i % 2 != 0){
            sum = sum + i;
            printf("\n%d", i);
        }
    }
    printf("\nA soma dos n�meros �mpares � igual a: %d", sum);
}
