// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pouca Frequência
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1277

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int tc;
	scanf("%d", &tc);
	while(tc--)
	{
		int n, cnt = 0;
		double x;
		string pt, nomes[101];
		vector<string> ans;
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++)
			cin >> nomes[i];
		for (int i = 0; i < n; i++)
		{
			x = 0.0;
			cin >> pt;
			int tam = (int) pt.size();
			for (int j = 0; j < (int) pt.size(); j++)
			{
				if (pt[j] == 'P')
					x++;
				if (pt[j] == 'M')
					tam--;
			}
			if ((x*100/tam) < 75.00)
			{
				cnt++;
				ans.push_back(nomes[i]);
			}
		}
		if (cnt == 0)
			printf("\n");
		else
		{
			cout << ans[0];
			for (int i = 1; i < (int) ans.size(); i++)
				cout << " " << ans[i];
			printf("\n");
		}
	}
	return 0;
}
