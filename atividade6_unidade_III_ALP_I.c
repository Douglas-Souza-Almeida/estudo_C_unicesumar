/* Elabore um algoritmo que imprima todas as tabuadas do 1 ao 10..*/

#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int num, cont;

    for (num=1; num<11; num++){
        for (cont=1; cont<11; cont++){
            printf("\n%d X %d = %d", num, cont, num * cont);
    }
    }
    return 0;

}
