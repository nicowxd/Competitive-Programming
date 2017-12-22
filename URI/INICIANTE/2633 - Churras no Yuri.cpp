// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Churras no Yuri
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2633

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;

	while(scanf("%d", &n) != EOF)
	{
		int x;
		string d;
		pair<int, string> carne[100];

		for (int i = 0; i < n; i++)
		{
			cin >> d >> x;
			carne[i] = make_pair(x, d);
		}

		sort(carne, carne+n);

		cout << carne[0].second;
		for (int i = 1; i < n; i++)
			cout << " " << carne[i].second;
		printf("\n");
	}
	return 0;
}
