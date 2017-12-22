// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Formatação Monetária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1309

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char inteiro[20];
    char decimal[4];
 
    while (gets(inteiro) != NULL)
    {
        gets(decimal);
 
        int i = 0;
        int ap = strlen(inteiro)%3;
 
        if (ap == 0)
        {
            ap = 3;
        }
 
        printf("$");
        while (i < strlen(inteiro))
        {
            if (ap > 0)
            {
                printf("%c", inteiro[i]);
                ap--;
            }
            else
            {
                printf(",%c",inteiro[i]);
                ap = 2;
            }
 
            i++;
        }
 
        printf(".");
 
        if (strlen(decimal) == 1)
        {
            printf("0%c\n", decimal[0]);
        }
        else
        {
            printf("%c%c\n", decimal[0], decimal[1]);
        }
 
    }

    return 0;
}

