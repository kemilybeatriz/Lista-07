/*
6. Escreva um programa que recebe uma frase de no m�ximo 100 caracteres e apresenta a frase
criptografada. Para tanto, utilize um n�mero inteiro que dever� ser somado aos caracteres da
frase. Por exemplo:
� Entrada: Fundamentos da programa��o
� Numero inteiro: 2
� Sa�da: Hwpfcogpvqu"fc"rtqitcocecq
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void main()
{
    char frase[TAM];
    char criptografada[TAM];
    int numero=0, tamanhoFrase, i;

    printf("Digite uma palavra/frase: ");
    gets(frase);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    criptografa(frase, numero);

}

void criptografa(char frase[TAM], int numero)
{
    int i, tamanhoFrase;
    tamanhoFrase = strlen(frase);
    for(i=0; i<tamanhoFrase; i++)
    {
        frase[i]=frase[i]+numero;
    }
    printf("Saida: %s", frase);
}
