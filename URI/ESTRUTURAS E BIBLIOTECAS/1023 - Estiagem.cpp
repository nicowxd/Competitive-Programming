// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Estiagem
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1023

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

map<int, int> consumo;
map<int, int>::iterator it;

int main()
{
    int n, x, y,z=0;
    double total, indtot,constot;
    while(scanf("%d", &n) != EOF && n)
    {
        if (z!= 0)
        {
            printf("\n");
        }
        z++;
        consumo.clear();
        indtot = 0;
        constot = 0;
        total = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            indtot+=x;
            constot+=y;
            if (consumo.find(floor(y/x)) != consumo.end())
            {
                consumo[floor(y/x)] += x;
            }
            else
            {
                consumo[floor(y/x)] = x;
            }
        }
        total=(((constot*1.0)/(indtot*1.0))-0.0049999999);
        printf("Cidade# %d:\n", z);
        for(it=consumo.begin(); it!=consumo.end(); it++)
        {
            if (distance(it,consumo.end()) != 1)
            {
                printf("%d-%d ", it->second, it->first);
            }
            else
            {
                printf("%d-%d\n", it->second, it->first);
            }
        }
        printf("Consumo medio: %.2lf m3.\n", total);
    }
    return 0;
}

