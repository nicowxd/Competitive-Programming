// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Competição
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1514

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m), n || m)
	{
		int pessoa[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &pessoa[i][j]);

		int ans = 0;
		bool check1 = true, check2 = true, check3 = true, check4 = true;
		for (int i = 0; i < n; i++)
		{
			int p1 = 0;
			for (int j = 0; j < m; j++)
				p1+= pessoa[i][j];

			if (p1 == m && check1)
				check1 = false;
			if (p1 == 0 && check4)
				check4 = false;
		}
		for (int i = 0; i < m; i++)
		{
			int p2 = 0;
			for (int j = 0; j < n; j++)
				p2+= pessoa[j][i];
			
			if (p2 == n && check3)
				check3 = false;
			if (p2 == 0 && check2)
				check2 = false;
		}
		if (check1)
			ans++;
		if (check2)
			ans++;
		if (check3)
			ans++;
		if (check4)
			ans++;
		printf("%d\n", ans);
	}
	return 0;
}
