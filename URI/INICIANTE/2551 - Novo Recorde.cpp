// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Novo Recorde
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2551

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		int ti, di, v = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &ti, &di);
			if (((di*100)/ti) > v)
			{
				printf("%d\n", i+1);
				v = ((di*100)/ti);
			}
		}
	}
	return 0;
}
