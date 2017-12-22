// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: É Hora do Duelo!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1896

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, d, h, x[20], y[20], z[20], cnt, sumx, sumy, sumz;
	bool exodia = false;
	scanf("%d %d %d %d", &n, &a, &d, &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &x[i], &y[i], &z[i]);
	}
	
	for (int i = 0; i < (1 << n); i++)
	{
		sumx = 0;
		sumy = 0;
		sumz = 0;
		cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
			{
				cnt++;
				sumx += x[j];
				sumy += y[j];
				sumz += z[j];
			}
		}
		if (sumx == a && sumy == d && sumz == h && cnt > 1)
		{
			exodia = true;
			break;
		}
	} 
	if (exodia)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}
