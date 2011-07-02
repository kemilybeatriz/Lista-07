/*
8. Escreva um programa que recebe uma string de até 100 caracteres e inverta cada palavra da
frase, apresentando a frase invertida. Exemplo:
· Entrada: Minha string informada
· Saída: ahniM gnirts adamrofni
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void inverteWord(char m[TAM]);

void main()
{
    char s[TAM];

    gets(s);
    inverteWord(s);
    puts(s);
}

void inverteWord(char m[TAM])
{
    int i, j, k=0, tamanho;
    char aux[TAM];
    tamanho = strlen(m);

    for(i=0; i<tamanho; i++)
    {
        if( m[i]==' ' )
        {
            for(j=i-1; j>=0 || m[j]!=' '; j--, k++)
            {
                aux[k] = m[j];
            }
            aux[k] = ' ';
            k++;
        }
    }

    strcpy(m, aux);
}
