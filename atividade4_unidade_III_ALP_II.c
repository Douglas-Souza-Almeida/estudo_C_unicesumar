/*É muito comum que programas tenham que implementar funcinalidades para identificar características específicas e realizar
operações sobre um conjunto de dados. Dessa forma, faça um programa que apresenta a soma de todos os números inteiros
ímpares, entre 200 e 500.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int num, i, sum;
    printf("\nNúmeros ímpares entre 200 e 500: ");
    for(num=1; num<=200; num++){
        i = num;
        if(i % 2 != 0){
            sum = sum + i;
            printf("\n%d", i);
        }
    }
    printf("\nA soma dos números ímpares é igual a: %d", sum);
}
