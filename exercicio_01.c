/*
1. Faça um programa que recebe uma string de até 100 caracteres e conta as ocorrências de uma
vogal durante a frase e apresente o valor.
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void main()
{
    char str[TAM];
    int i, vogal=0, sz;

    printf("Informe uma string: ");
    gets(str);

    sz = strlen(str);

    for(i=0; i<sz; i++)
    {
        switch(str[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            vogal ++;
            break;
        }
    }

    printf("%d vogais.", vogal);

}
