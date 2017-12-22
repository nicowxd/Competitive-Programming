// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fase
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2663

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, x;
	vector<int> v;
	scanf("%d", &n);
	scanf("%d", &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v.push_back(x);
	}

	sort(v.rbegin(), v.rend());

	int ans = k;
	int last = v[k-1];
	for (int i = k; i < (int) v.size(); i++)
	{
		if (v[i] == last)
		{
			ans++;
			last = v[i];
		}
		else
			break;
	}

	printf("%d\n", ans);
	return 0;
}
