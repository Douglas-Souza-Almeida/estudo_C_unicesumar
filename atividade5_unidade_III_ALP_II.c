/*Para classificar um conjunto de dados, é comum que o programadores utilizem estruturas de decisão associadas a estrutuas de repetição. Assim sendo,
construa um programa que apresente todos os números divisíveis por três e por sete, que sejam menores que 30.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int i, x;
    printf("Números divisíveis por 3 e por 7, menores que 30: ");
    for(i=1; i<30; i++){
        x = i;
        if((x % 3 == 0) && (x % 7 == 0)){
            printf("\n%d", x);
        }
    }
    return 0;
}