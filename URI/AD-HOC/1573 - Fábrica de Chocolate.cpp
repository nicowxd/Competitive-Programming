// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fábrica de Chocolate
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1573

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsigned long long int a,b,c,d;
    double res;
    while(scanf("%llu %llu %llu", &a, &b, &c) && (a || b || c))
    {
    d = a*b*c;
    res = cbrt(d);
    d = trunc(res);
    printf("%d\n", d);
    }
    return 0;
}

