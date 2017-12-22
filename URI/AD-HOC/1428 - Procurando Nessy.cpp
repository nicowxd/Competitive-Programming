// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Procurando Nessy
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1428

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,x,y,mini;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        mini = floor(x/3)*floor(y/3);
        printf("%d\n", mini);
    }
    return 0;
}

