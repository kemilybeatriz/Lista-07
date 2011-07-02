/*
5. Faça um programa que recebe duas strings de até 100 caracteres cada e informa se as duas são
iguais ou diferentes, para isso antes de compará-las transforme todos os caracteres em
maiúsculos ou minúsculos.
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

int verificaTamanho(char s1[TAM], char s2[TAM]);
void minuscula(char s[TAM]);
int comparaStrings(char s1[TAM], char s2[TAM]);

void main()
{
    char m1[TAM], m2[TAM];
    int mesmoTam;
    printf("Digite uma de duas strings: ");
    gets(m1);
    printf("Digite a segunda string: ");
    gets(m2);

    //mesmoTam = verificaTamanho(m1, m2);
    if( verificaTamanho(m1, m2) )
    {
        minuscula(m1);
        minuscula(m2);

        puts(m1);
        puts(m2);
        //printf("%s", m1);


        if( comparaStrings(m1, m2) )
        {
            printf("As strings %s e %s sao iguais.", m1, m2);
        }
        else
        {
            printf("As strings %s e %s sao diferentes.", m1, m2);
            //printf("As strings sao diferentes.");
        }



    }
    else
    {
        printf("As strrings %s e %s sao diferentes.", m1, m2);
    }
}

int verificaTamanho(char s1[TAM], char s2[TAM])
{
    /*int tamS1, tamS2, mesmo;
    tamS1 = strlen(s1);
    tamS2 = strlen(s2);
    if(tamS1==tamS2)
    {
        mesmo=1;
        return mesmo;
    }
    else if(tamS1!=tamS2)
    {
        mesmo=0;
        return mesmo;
    }*/
    if( strlen(s1)==strlen(s2) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void minuscula(char s[TAM])
{
    int i;
    int tamanho;
    tamanho=strlen(s);
    for(i=0; i<tamanho; i++)
    {
        if(s[i]>=65 && s[i]<=90) //se s estiver entre as letras maiúsculas;
        {
            s[i] = s[i]+32; //s maiúscula recebe letra minuscula;
        }
        /*
        if(s[i]==32) //se for digitado espaço;
        {
            s[i];
        }
        else
        {
            printf("String invalida.");
        }*/

    }
}

int comparaStrings(char s1[TAM], char s2[TAM])
{
    int i, igual=1;
    int tamanho;
    tamanho=strlen(s1);
    for(i=0; i<tamanho && igual==1 ; i++)
    {
        if(s1[i]!=s2[i])
        {
            igual=0;
        }
    }
    if(igual)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
