// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Perguntas mais Frequentes
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1553

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <stdlib.h>
#include <cmath>
#include <set>

using namespace std;

map<int, int> perg;
map<int, int>::iterator it;

int main()
{

    int n,k, p, tot;
    while(scanf("%d %d", &n ,&k) && (n  || k))
    {
        tot = 0;
        perg.clear();
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p);
            if (perg.find(p) != perg.end())
            {
                perg[p] += 1;
            }
            else
            {
                perg[p] = 1;
            }
        }
        for (it = perg.begin(); it != perg.end(); it++)
        {
            if (it -> second >= k)
            {
                tot++;
            }
        }
        printf("%d\n", tot);
    }
	return 0;
}

