// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Grenais
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1131

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    int i,g,flag,inter=0,empate=0,gremio=0,grenal=0;
    while(flag != 2)
    {
        scanf("%d %d", &i, &g);
        if (i > g)
        {
            inter++;
        }
        else if (i == g)
        {
            empate++;
        }
        else
        {
            gremio++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &flag);
        grenal++;
    }
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if (inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (inter == gremio)
    {
        printf("Nao houve vencedor\n");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}

