// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Culpado
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1521

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, k, ni[60];
    while(scanf("%d", &n) && n)
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &ni[i]);
        }
        scanf("%d", &k);
        while(ni[k] != k)
        {
            k = ni[k];
        }
        printf("%d\n", k);
    }
    return 0;
}

