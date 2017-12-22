// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corredor
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2463

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[51234];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int ans = 0, sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		if (sum < 0)
			sum = 0;
		ans = max(ans, sum);
	}

	printf("%d\n", ans);
	return 0;
}
