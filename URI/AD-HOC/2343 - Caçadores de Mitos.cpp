// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Caçadores de Mitos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2343

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);
	
	int v[510][510] = {0};
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (v[x][y] == 1)
			ans = 1;
		else
			v[x][y] = 1;
	}

	printf("%d\n", ans);
	return 0;
}
