/*
2. Escreva um programa que recebe uma string de no máximo 100 caracteres e um substring de no
máximo 5 caracteres e informa quantas ocorrências da substring há na string maior.
*/

#include <stdio.h>
#include <string.h>

#define SSTRING 100
#define SSUB 5

void main()
{
    char s[SSTRING], sub[SSUB];
    int i, j, a, k=1, tamS, tamSub, ocorr=0, igual;

    gets(s);
    gets(sub);

    puts(s);
    puts(sub);

    tamS = strlen(s);
    tamSub = strlen(sub);

    if(strcmp(s,sub)>=0)
    {
        for(i=0; s[i]; i++)
        {
            if(s[i]==sub[0])
            {
                igual=1;
                for(j=i+1, k=1; igual && sub[k] ; j++, k++)
                {
                    if(s[j]!=sub[k])
                    {
                        igual=0;
                    }
                }
                if( igual )
                {
                    ocorr++;
                }
            }

        }
        printf("%d ocorrencias.", ocorr);
    }

}
