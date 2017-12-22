// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dígito Mais Frequente
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2138

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string x;
	while(cin >> x)
	{
		int v[10] = {0};
		for (int i = 0; i < (int) x.size(); i++)
			v[x[i]-'0']++;

		int best = 0, ans;
		for (int i = 0; i <= 9; i++)
		{
			if (v[i] >= best)
			{
				best = v[i];
				ans = i;
			}
		}

		printf("%d\n", ans);
	}
	return 0;
}
