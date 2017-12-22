// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pontos de Feno
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

map<string, int> cargo;

string job;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int m, q, dol,tot;
    scanf("%d %d", &m, &q);
    for (int i = 0; i < m; i++)
    {
        cin >> job >> dol;
        cargo[job] = dol;
    }
    for (int i = 0; i < q; i++)
    {
        tot = 0;
        while(cin >> job && job.compare(".") != 0)
        {
            tot+=cargo[job];
        }
        printf("%d\n", tot);
    }
    return 0;
}

