// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Espaço de Projeto
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2683

#include <bits/stdc++.h>

using namespace std;

class UnionFind
{
    vector <int> h, p;

    public:
        UnionFind (int n)
        {
            h.assign(n+1, 0);
           p.assign(n+1, 0);
           for (int i = 0; i <= n; i++)
               p[i] = i;
        }

        int find(int i)
        {
            return (p[i] == i) ? i : p[i] = find(p[i]);
        }

        int check(int i, int j)
        {
            return find(i) == find(j);
        }

        void join(int i, int j)
        {
            if (check(i, j)) return;

            i = find(i), j = find(j);

            if (h[i] > h[j])
                p[j] = i;
            else
            {
                p[i] = j;
                if (h[i] == h[j])
                    h[j]++;
            }
        }
};


unsigned long long int calc(vector < pair <int, pair <int, int> > > Sort, int n)
{
    UnionFind mySet(n);
    unsigned long long int cost = 0;
    for (auto i : Sort)
    {
        if (!mySet.check(i.second.first, i.second.second))
            cost += i.first, mySet.join(i.second.first, i.second.second);
    }

    return cost;
}

int main (void)
{
    int n;

    scanf ("%d", &n);

    vector < pair <int, pair <int, int> > > E, E1;

    for (int i  = 0; i < n; i++)
    {
        int a, b, c;

        scanf ("%d %d %d", &a, &b, &c);

        E.push_back(make_pair(c, make_pair(a, b)));
        E1.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(E.begin(), E.end());
    sort(E1.rbegin(), E1.rend());

    printf ("%llu\n%llu\n", calc(E1, 1001), calc(E, 1001));
    
    return 0;
}

