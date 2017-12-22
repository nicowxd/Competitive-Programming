// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fechadura
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2449

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, x, v[1234];
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
		scanf("%d", v + i);
	
	int ans = 0, diff;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > m)
		{
			diff = v[i] - m;
			v[i] -= diff;
			v[i+1] -= diff;
			ans += diff;
		}
		if (v[i] < m)
		{
			diff = m - v[i];
			v[i] += diff;
			v[i+1] += diff;
			ans += diff;
		}
	}
	printf("%d\n", ans);
	return 0;
}
