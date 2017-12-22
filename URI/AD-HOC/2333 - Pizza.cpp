// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pizza
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2333

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[300010];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
		v[i+n] = v[i];
	}
	
	int sum = 0, ans = 0, j = 0, cnt = 0;

	for (int i = 0; i < n; i++)
	{
		j = i;
		while (sum >= 0 and j < n + i)
		{
			sum += v[j++];
			ans = max(ans, sum);
		}
		sum = 0;
	}

	printf("%d\n", ans);
	return 0;
}
