// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guilherme e Suas Pipas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1921

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
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
int main()
{
    unsigned long long int d, n;
    scanf("%llu", &n);
    if (n < 4)
    {
        printf("0\n");
    }
    else
    {
        d = n*(n-3)/2;
        printf("%llu\n", d);
    }
    return 0;
}

