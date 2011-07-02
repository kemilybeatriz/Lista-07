/*
3. Faça um programa que recebe três strings, o primeiro nome, o nome do meio, e o último nome
de uma pessoa, cada um em uma string, e as junte em uma quarta string, exibindo o nome
completo.
*/

#include <stdio.h>
#include <string.h>

#define NOME 30

void main()
{
    char nome[NOME];
    char nomeMeio[NOME];
    char sobrenome[NOME];
    char nomeCompleto[(NOME*3)];

    printf("Nome: ");
    gets(nome);
    printf("Nome do meio: ");
    gets(nomeMeio);
    printf("Sobrenome: ");
    gets(sobrenome);

    strcpy(nomeCompleto,nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto,nomeMeio);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto,sobrenome);

    printf("Nome completo: ");
    puts(nomeCompleto);
}
