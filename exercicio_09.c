/*
9. Fa�a um programa que recebe uma string de no m�ximo 100 caracteres e verifique onde h� mais
que um espa�o em branco e elimine o excesso dos mesmos. Exemplo:
� Entrada: String  informada para teste
� Sa�da:   String informada para teste
*/
#include <stdio.h>
#include <string.h>

#define TAM 100

void main()
{
    char texto[TAM];
    int i=0, j, cont=0, tamTexto;
    tamTexto = strlen(texto);

    printf("Entrada: ");
    gets(texto);
    while(texto[i]<tamTexto)
    {
        if(texto[i]==' ')
        {
            cont++;
        }
        i++;

        if(cont>1)
        {
            for(j=(i+cont-1); j<tamTexto; j++)
            {
                texto[i]=texto[j];
            }
        }
    }

    puts(texto);
}
