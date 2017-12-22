// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Número Primo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1165

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,x;
    bool prime;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        prime = true;
        for (int j=2; j < x && prime; j++)
        {
            if (x%j == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}

