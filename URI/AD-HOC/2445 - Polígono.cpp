// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Polígono
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2445

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[112345];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	sort(v, v+n);

	int ans, sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (sum > v[i])
			ans = i+1;
		sum += v[i];
	}

	printf("%d\n", ans);
			
	return 0;
}
