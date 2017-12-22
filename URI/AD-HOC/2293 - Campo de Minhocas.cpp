// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Campo de Minhocas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2293

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, m, mat[200][200];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &mat[i][j]);
	
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
			sum += mat[i][j];
		ans = max(ans, sum);
	}
	
	for (int j = 0; j < m; j++)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += mat[i][j];
		ans = max(ans, sum);
	}

	printf("%d\n", ans);
	return 0;
}
