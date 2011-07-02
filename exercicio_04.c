/*
4. Fa�a um programa que verifica se uma string de at� 50 caracteres � um pal�ndromo, ou seja, se
o inverso dela � igual a ela.
*/

#include <stdio.h>
#include <string.h>

#define TAM 50

void palindromo(char matriz[TAM]);

void main()
{
    char matriz[TAM];

    printf("Digite uma palavra: ");
    gets(matriz);
    palindromo(matriz);
}

void palindromo(char matriz[TAM])
{
    int i, j, tamanhoMatriz;

    tamanhoMatriz = strlen(matriz);

    for(i=0, j=(tamanhoMatriz-1); (i<tamanhoMatriz) && (j>=0); i++, j--)
    {
        if(matriz[i]!=matriz[j] && ((i==tamanhoMatriz-1)&&(j==0)))
        {
            printf("A string %s nao eh um palindromo.", matriz);
        }else if((matriz[i]==matriz[j]) && ( (i==(tamanhoMatriz-1) )&&(j==0)))
        {
            printf("A string %s eh um palindromo.", matriz);
        }
    }
}
