// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Quadrados
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2327

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[20][20], lin = 0, col = 0, diag = 0;
	bool wrong = false;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &v[i][j]);
	
	for (int j = 0; j < n; j++)
	{
		lin += v[0][j];
		col += v[j][0];
		diag += v[j][j];
	}

	int sumlin, sumcol;
	for (int i = 1; i < n; i++)
	{
		sumlin = sumcol = 0;
		for (int j = 0; j < n; j++)
		{
			sumlin += v[i][j];
			sumcol += v[j][i];
		}
		if (sumlin != lin)
			wrong = true;
		if (sumcol != col)
			wrong = true;
	}
	int sumdiag = 0;
	for (int i = n-1, k = 0; i >= 0; i--, k++)
		sumdiag += v[k][i];
	if (sumdiag != diag)
		wrong = true;
	
	if (!wrong and lin == col and col == diag)
		printf("%d\n", lin);
	else
		printf("-1\n");

	return 0;
}
