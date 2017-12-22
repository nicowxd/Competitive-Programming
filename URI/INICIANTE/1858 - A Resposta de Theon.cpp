// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Resposta de Theon
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1858

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,t,menor=30,ind;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (menor > t)
        {
            menor = t;
            ind = i+1;
        }
    }
    printf("%d\n", ind);
    return 0;
}

