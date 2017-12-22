// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Número Perfeito
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1164

#include <iostream>
#include <cstdio> // scanf e printf
#include <cstring>

using namespace std;

int main()
{
    int n,x,soma;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        soma = 0;
        for (int j = 1; j < x; j++)
        {
            if (x%j == 0)
            {
                soma+= j;
            }
        }
        if (soma == x)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}

