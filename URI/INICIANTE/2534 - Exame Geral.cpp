// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Exame Geral
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2534

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, q, x;
	vector<int> notas;

	while(scanf("%d %d", &n, &q) != EOF)
	{
		notas.clear();
	
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			notas.push_back(x);
		}
		
		sort(notas.rbegin(), notas.rend());
		
		for (int i = 0; i < q; i++)
		{
			scanf("%d", &x);
			printf("%d\n", notas[x-1]);
		}
	}
		
	return 0;
}
