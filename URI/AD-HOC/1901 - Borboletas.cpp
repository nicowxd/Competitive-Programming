// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Borboletas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1901

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, borb[210][210], x, y;
	set<int> qty;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &borb[i][j]);
		}
	}
	for (int i = 0; i < 2*n; i++)
	{
		scanf("%d %d", &x, &y);
		x--, y--;
		qty.insert(borb[x][y]);
	}
	printf("%d\n", qty.size());
	return 0;
}


