// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Onde Estão Minhas Chaves
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1800

#include <bits/stdc++.h>

using namespace std;

map<int, int> visit;

int main()
{
	int q, e, escr;
	scanf("%d %d", &q, &e);
	for (int i = 0; i < e; i++)
	{
		scanf("%d", &escr);
		visit[escr] = 1;
	}
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &escr);
		if (visit.find(escr) != visit.end())
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
			visit[escr] = 1;
		}
	}
	return 0;
}

