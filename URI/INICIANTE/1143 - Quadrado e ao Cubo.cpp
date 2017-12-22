// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Quadrado e ao Cubo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,tmp;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        tmp = i;
        for (int j = 0; j < 3; j++)
        {
            if (j<2)
            {
                printf("%d ",tmp);
            }
            else
            {
                printf("%d", tmp);
            }
            tmp*=i;
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

