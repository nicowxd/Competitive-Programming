// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guerra por Território
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2420

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[123456], sum = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", v + i);
		sum += v[i];
	}
	
	int ans, x = 0;
	for (int i = 0; i < n; i++)
	{
		x += v[i];
		sum -= v[i];
		if (x == sum)
			ans = i + 1;
	}
	
	printf("%d\n", ans);
	return 0;
}
