// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corrida 1
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2394

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	
	int ans, sum, x, menor = 1e9;	
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			sum+= x;
		}
		if (sum < menor)
		{
			menor = sum;
			ans = i+1;
		}
	}
	
	printf("%d\n", ans);
	return 0;
}
