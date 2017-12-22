// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Vai Ter Copa?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1564

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if (n == 0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}

