/*7. Escreva um programa que recebe uma string de no máximo 100 caracteres e escreva a string
invertida. Por exemplo:
· Entrada: Minha string informada
· Saída: adamrofni gnirts ahniM
*/
#include <stdio.h>
#include <string.h>

#define TAM 100

void inverteString(char s[TAM]);

void main()
{
    char s[TAM];

    printf("Digite uma string: ");
    gets(s);
    inverteString(s);
    puts(s);
}

void inverteString(char m[TAM])
{
    int i
    /*Esta função inverte a string

    int i, j, tamanho;
    char mT[TAM];

    tamanho = strlen(m);
    //for(i=0; i<tamanho; i++)
    //{
    //    mT[i] = m[i];
    //}
    strcpy(mT, m);
    for(i=0, j=tamanho-1; i<tamanho && j>=0; i++, j--)
    {
        m[i]=mT[j];
    }*/
    for(i=strlen(m)-1; i>=0; i--)
    {
        printf("%c", m[i]);
    }
}
