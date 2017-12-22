// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência Lógica 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1145

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x, y,cont=1;
    scanf("%d %d", &x, &y);
    for (cont; cont <=y; x=x)
    {
        for (int i = 0; i < x && cont <= y; i++)
        {
            if (i < x-1)
            {
                printf("%d ", cont);
            }
            else
            {
                printf("%d\n",cont);
            }
            cont++;
        }
    }
    return 0;
}

