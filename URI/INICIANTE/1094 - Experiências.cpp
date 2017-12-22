// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Experiências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    int n,qty,soma=0,coelho=0,rato=0,sapo=0;
    double pc,pr,ps;
    char tipo[3];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &qty, tipo);
        soma+= qty;
        if (strcmp(tipo,"C") == 0)
        {
            coelho+=qty;
        }
        if (strcmp(tipo,"R") == 0)
        {
            rato+=qty;
        }
        if (strcmp(tipo,"S") == 0)
        {
            sapo+=qty;
        }
    }
    pc = (double) (coelho*100)/soma;
    pr = (double) (rato*100)/soma;
    ps = (double) (sapo*100)/soma;
    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);
    return 0;
}
