/******************************************************************************
O processamento de dados textuais, atualmente, é bastante avançado, e já existem
bibliotecas capazes de auxiliar neste tipo de situação. Elabore um programa que
leia uma palavra e, se ela tiver número ímpar de caracteres, imprima todas as 
suas vogais.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define max 15
int main()
{
    setlocale(LC_ALL,"");
    char palavra [max];
    int i;
    char letra;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    strlwr(palavra);
    if(strlen(palavra) % 2 == 0)
    {
        printf("\nA palavra digitada contém %d letras, portando, não está de acordo com os critérios para continuar.", strlen(palavra));
    }else
    {
        if(strlen(palavra) % 2 != 0)
        {
            printf("\nA palavra digitada contém %d letras e possui as seguintes vogais: ", strlen(palavra));
            for(i = 0; i < max; i++)
            {
                letra = palavra[i];
                switch(letra)
                {
                    case 'a': printf("\n%c", letra);
                    break;
                    case 'e': printf("\n%c", letra);
                    break;
                    case 'i': printf("\n%c", letra);
                    break;
                    case 'o': printf("\n%c", letra);
                    break;
                    case 'u': printf("\n%c", letra);
                    break;
                }
             }
        }
    }
    
    return 0;
}
