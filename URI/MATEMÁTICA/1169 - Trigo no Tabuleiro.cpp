// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Trigo no Tabuleiro
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1169

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, x;
    unsigned long long int gr,total;
    double tot;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        tot = 0;
        scanf("%d", &x);
        gr = 1;
        for (int j = 2; j <= x; j++)
        {
             gr*=2;
        }
        tot = (gr/6);
        tot = floor(tot/1000);
        printf("%.0lf kg\n", tot);
    }
    return 0;
}

