// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fatorial
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1936

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int result[10000];

int fatorial (int x)
{
    if (x >= 0)
    {
        result[0] = 1;
        for(int i = 1; i <= x; i++)
        {
            result[i] = i*result[i-1];
        }
        return result[x];
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, cont=0, val= 1, k = 1;
    scanf("%d", &n);
    while(n != 0)
    {
        val = 1;
        k = 1;
        while(val <= n)
        {
            k++;
            val = fatorial(k);
        }
        k--;
        n -= fatorial(k);
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}

